#include <iostream>
using namespace std;

// Pass by Reference
void sum(int *x, int *y) {
    int result = *x + *y;
    cout << result << endl;
}

int add(int x, int y) {
   return x + y;
}

// function to return int*
int * returnPointer(){
   int result = 10;
   int *ptr = &result;
   return ptr;
}

int main(){
    int num = 20;

    // pointer
    int *ptr;
    ptr = &num;

    // function pointer
    int (*functionPointer)(int, int); 
    functionPointer = &add;

    // calling function stored in function pointer
    int result;
    result = (*functionPointer)(6,6); 
    
    int *res = returnPointer();
    cout << *res << endl;

    // value store  in ptr 
    cout << ptr <<endl;  

    // address of num
    cout << &num << endl; 

    // dereferencing
    cout << *ptr << endl; 

    // function accepting pointer as argument or called as Pass by Reference
    sum(&num, ptr);

    // Array
    int arr[4] = {1, 2, 3, 4};
    cout << arr[0] << endl;

    cout << "Array of pointer " << endl;
    int a[5] = {1, 2, 3, 4,5};
    int *p;
    p = a;
    cout<< *(p+2) << endl;

    return 0;
}

// Function Pointers in C / C++

