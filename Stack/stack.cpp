#include <iostream>
using namespace std;
// https://www.youtube.com/watch?v=JvuaAgDar1c
# define MAX 10

class Stack{
    int *arr;
    int top;

  public:
    Stack(){
        arr = new int[MAX];
        top = -1;
    }

   void push(int x){
       if(top == MAX-1){
        cout<<"Stack overflow " <<endl;
        return;
       }
       top += 1;
       *(arr + top) = x;
   }

   void pop(){
    if(top == -1){
        cout<<"Stack underflow " <<endl;
        return;
    }
    top -= 1;
   }

   int Top(){
      if(top == -1){
        cout<<"Stack underflow " <<endl;
        return -1;
    }
    return  *(arr+top);
   }

   bool empty(){
      return top == -1;
   }
};

int main(){
   Stack stack;
   stack.push(1);
   stack.push(2);
   stack.push(3);
   cout<< stack.Top() << endl;

   return 0;
}