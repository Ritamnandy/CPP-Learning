

// binary search tree
#include <iostream>
using namespace std;

class Node
{

public:
    int data;
    Node *Lchild;
    Node *Rchild;
    Node(int d)
    {
        data = d;
        Lchild = nullptr;
        Rchild = nullptr;
    }
};
Node *getNode(int item)
{
    return new Node(item);
}

Node *root = nullptr; // root node of the binary search tree

Node *serch_Node(Node *node)
{
    Node *temp = node;
    if (temp != nullptr)
    {
        while (temp->Lchild != nullptr)
        {
            temp = temp->Lchild;
        }
    }
    return temp;
}

void deletion(int item)
{
    if (root == nullptr)
    {
        cout << "Root is empty no deletion possible";
        return;
    }
    Node *ptr = root, *parent;
    int cases;
    bool flag = false;

    while (ptr != nullptr && flag == false)
    {
        if (item == ptr->data)
        {
            flag = true;
            break;
        }
        else if (item > ptr->data)
        {
            parent = ptr;
            ptr = ptr->Rchild;
        }
        else if (item < ptr->data)
        {
            parent = ptr;
            ptr = ptr->Lchild;
        }
    }
    if (flag == false)
    {
        cout << item << " not found no deletion";
        return;
    }
    if (ptr->Lchild == nullptr && ptr->Rchild == nullptr)
    {
        cases = 1;
    }
    else if (ptr->Lchild != nullptr && ptr->Rchild != nullptr)
    {
        cases = 3;
    }
    else
    {
        cases = 2;
    }

    if (cases == 1)
    {
        if (parent->Lchild == ptr)
        {
            parent->Lchild = nullptr;
            delete ptr;
        }
        else
        {
            parent->Rchild = nullptr;
            delete ptr;
        }
    }
    else if (cases == 2)
    {
        if (parent->Lchild == ptr)
        {
            if (ptr->Rchild == nullptr)
            {
                parent->Lchild = ptr->Lchild;
            }
            else
            {
                parent->Lchild = ptr->Rchild;
            }

        }
        else if (parent->Rchild == ptr)
        {
            if (ptr->Rchild == nullptr)
            {
                parent->Rchild = ptr->Lchild;
            }
            else
            {
                parent->Rchild = ptr->Rchild;
            }
        }
        delete ptr;
    }
    else if (cases == 3)
    {
        Node *temp = serch_Node(ptr->Rchild);
        int item1 = temp->data;
        deletion(item1);
        ptr->data = item1;
    }
}

void insert(int item)
{
    if (root == nullptr)
    {
        root = getNode(item);
        return;
    }
    Node *ptr = root, *ptr1;
    bool flag = false;

    while (ptr != nullptr && flag == false)
    {
        if (item == ptr->data)
        {
            flag = true;
            cout << item << " allready exixts no insertion possible";
            return;
        }
        else if (item > ptr->data)
        {
            ptr1 = ptr;
            ptr = ptr->Rchild;
        }
        else if (item < ptr->data)
        {
            ptr1 = ptr;
            ptr = ptr->Lchild;
        }
    }
    if (ptr == nullptr)
    {
        Node *temp = getNode(item);
        if (ptr1->data < item)
        {
            ptr1->Rchild = temp;
        }
        else
        {
            ptr1->Lchild = temp;
        }
    }
}

void traversal(Node *node)
{

    if (node != nullptr)
    {
        traversal(node->Lchild);
        cout << node->data << " -> ";
        traversal(node->Rchild);
    }
}

void freeMemory(Node *&node)
{
    if (node != nullptr)
    {
        freeMemory(node->Lchild);
        delete node;
        // cout << "Delete\n";
        freeMemory(node->Rchild);

        node = nullptr;
    }
}

int main()
{

    insert(4);
    insert(2);
    insert(3);
    insert(1);
    insert(5);
    insert(6);
    insert(7);
    insert(8);
    insert(9);
    insert(10);
    deletion(4);

    traversal(root);
    cout << " NULL \n";
    freeMemory(root);
    return 0;
}