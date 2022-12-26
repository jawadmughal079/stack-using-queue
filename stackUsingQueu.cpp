#include <iostream>
using namespace std;
class Node
{

public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
class Queue
{
    Node *head;

public:
    Queue()
    {
        head = NULL;
    }
    void push(int data)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            Node *temp = head;
            while (temp->next != NULL)
            {
                /* code */
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }
    void print()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            /* code */
            cout << temp->data << "  ";
            temp = temp->next;
        }
        cout << endl;
    }
    void pop()
    {
        Node *temp = head;
        while (temp->next->next != NULL)
        {
            /* code */
            temp = temp->next;
        }
        Node *delNode = temp->next;
        temp->next = NULL;
        delete delNode;
    }
};

int main()
{
    Queue q1;
    q1.push(5);
    q1.push(4);
    q1.push(3);
    q1.push(2);
    q1.push(1);
    q1.print();
    cout << "values after delete ";
    q1.pop();
    q1.print();
    return 0;
}
