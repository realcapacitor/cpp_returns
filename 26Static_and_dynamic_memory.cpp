#include<iostream>

using namespace std;
int main(){
    //Static and dynamic memory.
    //In c++ the memory is divided into two parts:
    //The Stack and The Heap
    //The Stack : All of your local variables take up memory from the stack.
    //The Heap : Unused program memory that can be used when the program runs to dynamically allocate the memory.
    //You can allocate the memory at run time using new operator, which returns the address of the space that is allocated

    new int;
    //This allocates the memory size necessary for storing as integer on the heap, and return that address.
    //The allocated address can be stored in a pointer which can then be dereferenced to access the variable.
    int *p = new int;
    *p = 5;
    cout<<*p<<endl;
    //In above example the variable p is stored in a stack memory and it contains the address of 5 that is stored dynamically
    //in the heap memory.
    //We just can not declare a pointer and assign a value at the address, first we have to create space then get its address
    //and then assign value at that address.
    /*
    int *x;
    *x = 5;
    cout<<*x<<endl;
    */

    return 0;
}