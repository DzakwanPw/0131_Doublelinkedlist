#include <iostream>
#include <string>
using namespace std;

class Node
{
public:
    int noMhs;
    Node *next;
    Node *prev;
};

class DoubleLinkedList
{
private:
    Node *START;

public:
    DoubleLinkedList()
    {
        START = NULL;
    }

    void adNode()
    {
        int nim;
        cout << "\nEnter the roll number of the student:";
        cin >> nim;

        // Step 1
        Node *newNode = new Node();

        // Step 2: Assign value to the data fields
        newNode->noMhs = nim;

        // Step 3: Insert at begining if list is empty or nim is smallest
        if (START == NULL || nim <= START->noMhs)
        {
            if (START != NULL && nim == START->noMhs)
                cout << "\nDuplicate number not allowed" << endl;
            return;
        }
        // Step 4 newMode.next = START
        newNode->prev = START;

        // Step 5 START.prev = newMode (if START exists)
        if (START != NULL)
            START->prev = newNode;

        // Step 6: newMode.prev = NULL
        newNode->prev = NULL;

        // Step 7: START = newMode
        START = newNode;
        return;

        // insert in between node
        // Step 8: locate position for insertion
        Node *Current = START;
        while (current->next != NULL && current->next->noMhs < nim)
        {
            current = current->next
        }

        if (current->next != NULL && NIM == current->next->noMhs)
        {
            cout << "\nDuplicate roll number not allowed" << endl;
            return 0;
        }

        // Step 9
        newNode->next = current->next; // Step 9a
        newNode->prev = current;       // Step 9b

        // insert
        if (current->next != NULL)
            current->next->prev = noMhs; // step 9c
        current->next = newNode;         // step 9d
    }
}

void
hapus()
{
    if (START = NULL)
    {
        cout << "\nList is empty" << endl;
        return;
    }

    cout << "\nMasukan nim yang akan dideleted";
    int rollNo;
    cin >> rollNo;

    // Step 2: if node is at the begining
    if (current == START)
    {
        START = current->next;
        if (START != NULL)
        {
            START->prev = NULL; //
        }
        else
        {
            //
            current->prev->next = current->next;

            //
            if (current->next != NULL)
                current->next->prev = current->prev;
        }

        // Step 5: Delet the node
        delete current;

