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
            cout << temp->data << endl;
            temp = temp->next;
        }
    }
    void peek()
    {
        node *temp = new node;
        temp = head;
        cout << temp->data << endl;
    }
    void pop()
    {
        node *temp = new node;
        runtime_error noElements("There are no elements in the list");
        if (LinkedList::count() == 0)
        {
            throw noElements;
        }
        temp->next = head;
        temp = head;  
        delete temp;
    }
    void insert(int value,int position)
    {
        node *temp = new node;
        node *current = new node;
        node *previous = new node;
        current = head;
        runtime_error space("The list is too short");
        if(position <= LinkedList::count()) 
        {    
            for (size_t i = 1; i < position; i++)
            {
                previous = current;
                current = current->next;
            }
            temp->data = value;
            previous->next = temp;
            temp->next = current;
        }
        else
        {
            throw space;
        }
    }
    void erase(int position)
    {
        node *current = new node;
        node *previous = new node;
        current = head;
        runtime_error range("Index out of range");
        if (position <= LinkedList::count())
        {
            for (size_t i = 1; i < position; i++)
            {
                previous = current;
                current = current->next;
            }
            previous->next = current->next;
        }
        else
        {
            throw range;
        }
    }
};

int main()
{
    LinkedList* list = new LinkedList();
    //list->print();
    list->push(10);  // Adds new item at the begining of the list
    //list->count(); // returns the number of elements in the list
    list->peek();
    list->push(20);
    list->pop();
    list->print();
    list->erase(10);
    int value = 20, position = 4;
    list->insert(value, position); // inserts a value at a position inside the list, if the list is too short throws an exception;
    /// list.peek(); // returns the first element of the list
    /// list.pop(); // removes the first element of the list throws exception if no elements exist
    /// list.erase(10) // removes the element at index 10, throws exception if index is out of range
    // list.elementAt(22) // returns the element at index 22, throws exception if index is out of range
     
    // list.reverse(); // reverses the list
    // list.print(); // prints the list to stdout

    // int arr[] = {1, 5, 22, -7, 38};
    // LinkedList* list2 = new LinkedList(arr); //creates a list from array


    return 0;
}