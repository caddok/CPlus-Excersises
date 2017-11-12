#include <iostream>

using namespace std;

int sum(int, int); // Forward declaration
int passByPointer(int* const intp);

int main(int argc, char** argv)
{
    int num = 6;
    cout << "Value: " << num << " Pointer: " << &num << endl;
    int num2 = 5;

    int *nump = &num;
    cout << "Value of nump: " << nump << endl;
    cout << "Dereferencing nump: " << *nump << endl;

    cout << "Result of *&num: " << *&num << endl;

    int *heap_int = new int(100);

    cout << "heap_int pointer: " << heap_int << " heap_int value: " << *heap_int << endl;

    int &ref = num;

    cout << "Ref value: " << ref << endl;
    cout << "Ref address: " << &ref << endl;

    int *arr = new int[4];
    arr[0] = 5;
    arr[1] = 13;
    arr[2] = 87;
    arr[3] = 365;

    cout << "arr: " << arr << endl;
    cout << "*arr: " << *arr << endl;
    cout << "*(arr + 1) Address: " << arr + 1 << endl;
    cout << "*(arr + 1): " << *(arr + 1) << endl;

    cout << "Equivalent to" << endl;
    cout << arr[0] << endl << arr[1] << endl;

    cout << endl << "Functions" << endl;
    cout << sum(5, 10) << endl;

    int *pointer_var = new int(33);

    cout << "Pointer var: " << *pointer_var << endl;
    cout << "Function result: " << passByPointer(pointer_var) << endl;
    cout << "Pointer after operation: " << *pointer_var << endl;

    return 0;
}

int sum(int a, int b)
{
    return a + b;
}

int passByPointer(int* const intp)
{
    *intp = 22;
    return (*intp) * 44;
}
