#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->data = val;
        this->next = nullptr;
        this->prev = nullptr;
    }
};

class DLList
{
public:
    Node *head;
    Node *tail;

    DLList()
    {
        head = tail = nullptr;
    }

    // Destructor to prevent memory leaks when the list is destroyed
    ~DLList()
    {
        Node *current = head;
        while (current != nullptr)
        {
            Node *nextNode = current->next;
            delete current;
            current = nextNode;
        }
    }

    void print()
    {
        Node *tempPtr = head;

        while (tempPtr)
        {
            cout << tempPtr->data << " -> ";
            tempPtr = tempPtr->next;
        }

        cout << "NULL" << endl; // Added NULL for visual clarity
    }

    void push_front(int val)
    {
        Node *newNode = new Node(val);

        if (!head)
        {
            head = tail = newNode;
        }
        else
        {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    void pop_front()
    {
        if (!head)
        {
            cout << "List is empty." << endl;
            return;
        }

        Node *tempPtr = head;
        head = head->next; // Move head to the next node

        if (head) // If the list is not empty after popping
        {
            head->prev = nullptr;
        }
        else // If the list is now empty
        {
            tail = nullptr;
        }

        delete tempPtr; // Safely delete the old head
    }

    void push_back(int val)
    {
        Node *newNode = new Node(val);

        if (!head)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    void pop_back()
    {
        if (!head)
        {
            cout << "List is empty." << endl;
            return;
        }

        Node *tempPtr = tail;
        tail = tail->prev; // Move tail back by one using the prev pointer! (O(1) time)

        if (tail) // If the list is not empty after popping
        {
            tail->next = nullptr;
        }
        else // If the list is now empty
        {
            head = nullptr;
        }

        delete tempPtr; // Safely delete the old tail
    }

    void insertAtPos(int val, int pos)
    {
        if (pos < 0)
        {
            cout << "Invalid position." << endl;
            return;
        }

        if (pos == 0)
        {
            push_front(val);
            return;
        }

        Node *tempPtr = head;
        for (int i = 0; i < pos - 1; i++)
        {
            if (tempPtr == nullptr)
            {
                cout << "Position out of bounds." << endl;
                return;
            }
            tempPtr = tempPtr->next;
        }

        if (tempPtr == nullptr)
        {
            cout << "Position out of bounds." << endl;
            return;
        }

        if (tempPtr == tail)
        {
            push_back(val);
            return;
        }

        // Fixed: Updating both next and prev pointers for a middle insertion
        Node *newNode = new Node(val);

        newNode->next = tempPtr->next;
        newNode->prev = tempPtr;

        tempPtr->next->prev = newNode; // Point the node AFTER tempPtr back to newNode
        tempPtr->next = newNode;       // Point tempPtr forward to newNode
    }

    int search(int val)
    {
        Node *tempPtr = head;
        int index = 0;

        while (tempPtr != nullptr)
        {
            if (tempPtr->data == val)
            {
                return index;
            }

            tempPtr = tempPtr->next;
            index++;
        }

        return -1;
    }
};

int main()
{
    DLList list;

    list.push_front(2);
    list.push_front(1);
    list.push_front(0);

    list.push_back(3);
    list.push_back(4);
    list.push_back(5);

    list.print();

    return 0;
}