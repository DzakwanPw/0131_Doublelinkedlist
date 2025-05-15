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
        cout << "\"
    }
}



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
                START->prev = noMhs;
    