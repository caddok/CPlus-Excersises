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
    node *head;

    public:
    LinkedList()
    {
        head = NULL;
    }
    int count()
    {
        node *temp = head;
        int length = 0;
        while (temp != NULL)
        {
            length++;
            temp = temp->next;
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
        node *temp = head;
        runtime_error empty("The list is empty");
        if (temp == NULL)
        {
            throw empty;
        }
        cout << "Elements in list:";
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    int peek()
    {
        return head->data;
    }
    void pop()
    {
        runtime_error noElements("There are no elements in the list");
        if (LinkedList::count() == 0)
        {
            throw noElements;
        }
        node *temp = head;  
        head = head->next;
        delete temp;
    }
    void insert(int value,int position)
    {
        node *temp = new node;
        node *current;
        node *previous;
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
        if (position < LinkedList::count())
        {
            for (size_t i = 1; i < position; i++)
            {
                previous = current;
                current = current->next;
            }
            previous->next = current->next;
        }
        else if (LinkedList::count() == 1)
        {
            head = head->next;
            delete current;
        }
        else
        {
            throw range;
        }
    }
    void elementAt(int position)
    {
        node *temp = new node;
        node *current = new node;
        current = head;
        runtime_error range("Index out of range");
        if (position > LinkedList::count())
        {
            throw range;
        }
        else
        {
            for (size_t i = 1; i < position; i++)
            {
                temp = current;
                current = current->next;
            }
            cout << "Element at position " << position << " :" <<current->data << endl;
        }
    }
    void reverse()
    {
        node *current = new node;
        node *prev = new node;
        node *next = new node;
        current = head;
        prev = NULL;
        while (current != NULL)
        {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        head = prev;
    }
};

int main()
{
    LinkedList* list = new LinkedList();
    //list->print();
    list->push(10);  // Adds new item at the begining of the list
    cout << "Show count of the elements" << endl;
    cout << "Number of elements: " << list->count() << endl; // returns the number of elements in the list
    cout << "Show the first element" << endl;
    list->peek();
    list->push(20);
    list->push(30);
    list->push(31);
    list->push(35);
    list->push(37);
    list->push(40);
    cout << "Show the added element to the front" << endl;
    list->print();
    list->reverse();
    cout << "Show the reversed elements of the list" << endl;
    list->print();
    list->pop();
    cout << "Show list after deleting the first element of it" << endl;
    list->print();
     cout << "Show the element at position X" << endl;
    list->elementAt(1);
    list->print();
    list->erase(1);
    cout << "Erase the element at position X" << endl;
    list->print();
    int value = 20, position = 4;
    cout << "Try inserting element at " << position << " :" << endl;
    list->insert(value, position); // inserts a value at a position inside the list, if the list is too short throws an exception;
    /// list.peek(); // returns the first element of the list
    /// list.pop(); // removes the first element of the list throws exception if no elements exist
    /// list.erase(10) // removes the element at index 10, throws exception if index is out of range
    /// list.elementAt(22) // returns the element at index 22, throws exception if index is out of range
     
    // list.reverse(); // reverses the list
    /// list.print(); // prints the list to stdout

    // int arr[] = {1, 5, 22, -7, 38};
    // LinkedList* list2 = new LinkedList(arr); //creates a list from array


    return 0;
}