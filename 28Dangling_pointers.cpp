#include<iostream>
using namespace std;
int main(){
    //Dangling pointers
    //The delete operator frees up the memory allocated for the variable, but does not
    //delete the pointer itself, as the pointer is stored on the stack.

    //Pointers that are left pointing to non-existent memory locations are called as 
    //Dangling pointers.

    int *p = new int;       //Request the memory
    *p =5;                  //store value
    cout<<p<<endl;
    delete p;               //free the memory
    //Now p is a dangling pointer.
    p = new int;            //reuse pointer for new address.
    cout<<p<<endl;
    return 0;
}