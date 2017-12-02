#include <iostream>
#include <stdexcept>

using namespace std;

class LinkedList
{
    struct node
    {
        int data;
        node *next;        
    };
    private:
    node *head,*tail;
    public:
    LinkedList()
    {
        head = NULL;
        tail = NULL;
    }
    int count()
    {
        node *temp = head;
        int length = 0;
        while (temp != NULL)
        {
            length++;
            temp = temp -> next;
        }
        return length;
    }
    void push (int value)
    {
        node *temp = new node;
        temp->data = value;
        temp->next = head;
        head = temp;
    }
    void print()
    {
        node *temp = new node;
        temp = head;
        runtime_error empty("The list is empty");
        if (LinkedList::count() == 0)
        {
            throw empty;
        }
        while (temp != NULL)
        {
            cout << temp->data << "\t";
            temp = temp->next;
        }
    }
    void insert(int value,int position)
    {
        node *temp = new node;
        node *current = new node;
        node *previous = new node;
        runtime_error space("The list is too short");
        if(position < LinkedList::count()) 
        {    
            for (size_t i = 1; i < position; i++)
            {
                previous = current;
                current = current->next;
            }
        }
        else
        {
            throw space;
        }
    }
};

int main()
{
    LinkedList* list = new LinkedList();
    //list->print();
    list->push(10);  // Adds new item at the begining of the list
    //cout << list->count() << endl; // returns the number of elements in the list
    list->print();
    int value = 20, position = 4;
    list->insert(value, position); // inserts a value at a position inside the list, if the list is too short throws an exception;
    // list.peek(); // returns the first element of the list
    // list.pop(); // removes the first element of the list throws exception if no elements exist
    // list.erase(10) // removes the element at index 10, throws exception if index is out of range
    // list.elementAt(22) // returns the element at index 22, throws exception if index is out of range
     
    // list.reverse(); // reverses the list
    // list.print(); // prints the list to stdout

    // int arr[] = {1, 5, 22, -7, 38};
    // LinkedList* list2 = new LinkedList(arr); //creates a list from array


    return 0;
}