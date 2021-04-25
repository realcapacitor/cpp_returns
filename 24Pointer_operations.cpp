#include<iostream>
using namespace std;
int main(){
    //Pointer operations: Dereferancing.
    //There are two type of pointer operator
    //1. &(Address of operator): return memory of the varible.
    //2. *(Asterisk) : retursns the value store at the address.
     int x = 10;
     int * y = &x;
     cout<<"The x is x = "<<x<<endl;
     cout<<"The address of x is &x = "<<&x<<endl;
     cout<<"The address of x is y = "<<y<<endl;
     cout<<"Dereferencing y as *y = "<<*y<<endl;
     cout<<"Dereferencing pointer x as *(&x) is "<<*(&x)<<endl;
    return 0;
}