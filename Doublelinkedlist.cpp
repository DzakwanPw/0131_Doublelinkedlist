#include <iostream>
#include <string>
using namespace std;

//nama repository
//4NIMBLKG_Doublelinkedlist
//minimal commit 14

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
        cout << "";
         // Step 2: Assign value to the data fields
    newMode->noMhs = nim;

    // Step 3: Insert at begining if list is empty or nim is smallest
    if (START == NULL || nim <= START->noMhs)
    {
        if (START != NULL && nim == START->noMhs)
                cout << "\nDuplicate number not allowed" << endl;
                return;
            }
            // Step 4 newMode.next = START
            newMode->prev = START;

            // Step 5 START.prev = newMode (if START exists)
            if (START != NULL)
                START->prev = newMode;

            // Step 6: newMode.prev = NULL
            newMode->prev = NULL;

            // Step 7: START = newMode
            START = newMode;
            return;
        }

        // insert in between node
        // Step 8: locate position for insertion
        Node *Current = START;
        while (current->next != NULL && current->next->noMhs < nim)
        {
            current = current->next
        }

        if (current->next != NULL && NIM == current->next->noMhs)
        {
            cout << "\nDuplicate roll number not allowed"  << endl;
            return 0;
        }

        //Step 9
        newMode->next = current->next; // Step 9a
        newMode->prev = current;       // Step 9b
        
        // insert
        if(current->next != NULL)
            current->next->prev = noMhs; // step 9c
        current->next = newNode; // step 9d
    }
};




   

 