#include <iostream>
using namespace std;

void insertionOperation(){
   int array[] = {1, 2,3};
    int tempArrayLength = 3, pos = 1, newElement = 100;
    for (int i = tempArrayLength-1; i >= pos; i--)
    {
        array[i + 1] = array[i];
    }
    array[pos] = newElement;
    for (int j = 0; j <= tempArrayLength; j++)
    {
        cout << array[j] << " ";
    }
}

void deletionOperation(){
    int array[] = {1, 2, 3, 4, 5, 6};
    int tempArrayLength = 6, pos = 3;
    for (int i = pos;i < tempArrayLength-1;i++){
        array[i] = array[i+1];
    }
    for (int j = 1;j<=tempArrayLength-1;j++){
          cout << array[j-1] << " ";
    }
}

void searchOperation(){
     int array[] = {11, 12, 13, 14,15, 16};
     int tempArrayLength = 6,isElementExist = 0;
     int match = 4;
     for (int i = 0; i < tempArrayLength;i++) {
            if(array[i] == match){
                 isElementExist = 1;
                 cout << match << " found at " << i+1 << endl;
                 break;
            }
     }
     if(!isElementExist){
         cout<< match << " not found in array !" << endl;
     }
}

int main(){
    // insertionOperation();
    // deletionOperation();
    searchOperation();
    return 0;
}