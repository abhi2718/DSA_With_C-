#include <iostream>
using namespace std;

int main(){
    int *ptr;
    // malloc is used to allocate memory dynamically for single block
    // ptr = (int*) malloc(5*sizeof(int));

    // calloc is used to allocate memory dynamically for multiple blocks
    ptr = (int*) calloc(5,sizeof(int));
    for(int i=0; i<5; i++){
        ptr[i] = (2*i)+1;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << ptr[i] << endl;
    }
    free(ptr);
    return  0;
}

/*
Notes : 

1. Realloc :- https://www.youtube.com/watch?v=z-MHVnhpf9w
When the memory is insufficient for calloc() or malloc(),
we can reallocate the memory using realloc(). 
It rearranges or changes the memory size.

*/