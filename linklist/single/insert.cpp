
#include <iostream>
using namespace std;

class Node
{

public:
    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
    int data;
    Node *next;
};

void insert_end(Node **node, int data)
{
    Node *newNode = new Node(data), *temp;
    if (*node == nullptr)
    {
        *node = newNode;
        return;
    }
    temp = *node;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void insert_first(Node **node, int data)
{

    Node *newNode = new Node(data);
    if (*node == nullptr)
    {
        *node = newNode;
        return;
    }
    newNode->next = *node;
    *node = newNode;
}

void insert_anyposition(Node **node, int pos, int data)
{
    Node *newNode = new Node(data), *temp, *next;

    if (pos == 0 || *node == nullptr)
    {
        insert_first(node, data);
        return;
    }
    temp = *node;
    for (int i = 1; i <= pos - 2; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}
void display(Node **node)
{

    Node *temp = *node;

    while (temp != nullptr)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL" << endl;
}

void deleteMemory(Node **node)
{

    Node *temp;

    while (*node != nullptr)
    {
        temp = *node;
        *node = (*node)->next;

        delete temp;
    }
}

int main()
{
    Node *head = nullptr;
    insert_first(&head, 10);
    insert_first(&head, 20);
    insert_first(&head, 30);
    insert_first(&head, 40);
    insert_first(&head, 50);
    insert_end(&head, 90);
    insert_end(&head, 100);
    insert_anyposition(&head, 4, 200);
    insert_anyposition(&head, 9, 9000);
    display(&head);

    deleteMemory(&head);

    return 0;
}