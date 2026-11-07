// Min heap tree
/*
Parent Index = (index - 1) / 2)
Left Child Index = 2 * i + 1
Right Child Index = 2 * index + 2
*/
#include <iostream>
#include <vector>
using namespace std;

class MinHeap
{

private:
    vector<int> heap;
    // down to up
    void heapify_Up(int index)
    {
        while (index > 0)
        {
            int parent = (index - 1) / 2;
            if (heap[parent] > heap[index])
            {
                swap(heap[parent], heap[index]);
                index = parent;
            }
            else
            {
                break;
            }
        }
    }
    // up to down
    void heapify_Down(int index, int len)
    {
        while (true)
        {
            int lchild = (2 * index + 1);
            int rchild = (2 * index + 2);

            // Assume current index is the smallest
            int smallest = index;

            if (lchild < len && heap[lchild] < heap[smallest])
            {

                smallest = lchild;
            }
            if (rchild < len && heap[rchild] < heap[smallest])
            {
                smallest = rchild;
            }

            if (smallest == index)
            {
                break;
            }
            swap(heap[index], heap[smallest]);
            index = smallest;
        }
    }

public:
    void
    insertion(int value)
    {
        // add element at the end of an array
        heap.push_back(value);

        // heapify the last element
        heapify_Up(heap.size() - 1);
    }

    int deletion()
    {
        if (heap.empty())
        {
            throw runtime_error("Heap is empty");
        }

        int first = heap.front();

        // Only one element
        if (heap.size() == 1)
        {
            heap.pop_back();
            return first;
        }

        heap[0] = heap.back();
        heap.pop_back();
        heapify_Down(0, heap.size());
        return first;
    }

    void display()
    {

        cout << "Min heap Tree:  ";
        for (int i : heap)
        {
            cout << i << " ";
        }
        cout << endl;
    }
};

int main()
{
    MinHeap minHeap;
    minHeap.insertion(20);
    minHeap.insertion(10);
    minHeap.insertion(30);
    minHeap.insertion(50);
    minHeap.insertion(40);
    minHeap.insertion(5);
    minHeap.deletion();
    minHeap.display();

    return 0;
}