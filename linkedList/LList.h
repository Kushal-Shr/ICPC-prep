#ifndef LLIST_H
#define LLIST_H

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        this->data = val;
        this->next = nullptr;
    }
};

class LList
{
public:
    Node *head;
    Node *tail;

    LList()
    {
        head = tail = nullptr;
    }

    void print()
    {
        Node *tempPtr = head;

        while (tempPtr)
        {
            cout << tempPtr->data << " -> ";
            tempPtr = tempPtr->next;
        }

        cout << endl;
    }

    void push_front(int val)
    {
        Node *newNode = new Node(val);

        if (!head)
        {
            head = newNode;
            tail = newNode;
        }

        else
        {
            newNode->next = head;
            head = newNode;
        }
    }

    void pop_front()
    {
        if (head)
        {
            Node *tempPtr = head;

            if (head == tail)
            {
                tail = nullptr;
            }

            head = head->next;
            tempPtr->next = nullptr;

            delete tempPtr;
        }

        else
        {
            cout << "List is empty." << endl;
            return;
        }

        return;
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

        else
        {
            Node *tempPtr = head;

            if (head == tail)
            {
                head = nullptr;
                tail = nullptr;
            }

            else
            {
                while (tempPtr->next != tail)
                {
                    tempPtr = tempPtr->next;
                }

                tempPtr->next = nullptr;
                delete tail;
                tail = tempPtr;
            }
        }
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

        Node *newNode = new Node(val);
        newNode->next = tempPtr->next;
        tempPtr->next = newNode;
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

#endif