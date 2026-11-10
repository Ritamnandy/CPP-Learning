//Max Heap Implementation in C++
#include <iostream>
#include <vector>
using namespace std;

class MaxHeap
{
private:
    vector<int> heap;
    vector<int> sortedHeap;

    // down to up after insert an element
    void heapify_Up(int index)
    {
        while (index > 0)
        {
            int parent = (index - 1) / 2;
            if (heap[parent] < heap[index])
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

    // up to down after delete an element
    void heapify_Down(int index, int len)
    {
        while (true)
        {
            int lchild = (2 * index + 1);
            int rchild = (2 * index + 2);

            // Assume current index is the largest
            int largest = index;
            // check if left child is greater than current index
            if (lchild < len && heap[lchild] > heap[largest])
            {
                largest = lchild;
            }
            // check if right child is greater than current index
            if (rchild < len && heap[rchild] > heap[largest])
            {
                largest = rchild;
            }
            // check if largest is still the current index, if so break the loop
            if (largest == index)
            {
                break;
            }

            swap(heap[index], heap[largest]);
            index = largest;
        }
    }

public:
    void insertion(int val)
    {
        heap.push_back(val);
        heapify_Up(heap.size() - 1);
    }

    int deletion()
    {
        if (heap.empty())
        {
            throw runtime_error("Heap is empty");
        }
        int first = heap.front();
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

        cout << "Max heap Tree:  ";
        for (int i : heap)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    void sort()
    {
        while (!heap.empty())
        {
            int first = heap.front();
            heap[0] = heap.back();
            heap.pop_back();
            heapify_Down(0, heap.size());
            sortedHeap.push_back(first);
        }
        cout << "Sorted Max heap Tree:  ";
        for (int i : sortedHeap)
        {
            cout << i << " ";
        }
        cout << endl;
    }
};

int main()
{
    MaxHeap maxHeap;

    maxHeap.insertion(20);
    maxHeap.insertion(50);
    maxHeap.insertion(31);
    maxHeap.insertion(10);
    maxHeap.insertion(21);
    maxHeap.insertion(40);
    maxHeap.insertion(11);
    maxHeap.insertion(41);
    maxHeap.insertion(30);
    maxHeap.insertion(51);
    maxHeap.display();
    maxHeap.sort();
    return 0;
}