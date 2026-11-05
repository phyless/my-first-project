#include <iostream>
using namespace std;
int main(){
    //null pointer

    int*pPointer = nullptr;
    int numbersArray[3] = {10, 20, 30};

    //assign address of the first element to pointeer
    pPointer = numbersArray;

    //output the address of the first element 
    cout << "Address at pPointer:" << pPointer << endl;
    cout << "Address of numbersArray[0]:"<< numbersArray << endl;

    //This outputs the value of  the first  element and indirection
    cout << "value at pPointer:"<< *pPointer << endl;

   // This outputs the value of the second element
   cout << " value of ++pPointer" << *(++pPointer)<< endl;

   //assign address of first element to pointer 
   pPointer = numbersArray;

   //This outputs the value of the first element
   cout << "value at pPointer++:"<< *(pPointer++) << endl;
   return 0;
}