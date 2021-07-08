#include<iostream>
using namespace std;

//There are two types of varible scopes, 1. Inside a function, 2. Outside the function.
//1. Inside the function:
//  It is called as a local variable and has local scope. If we declare a variable as a function parameter it is called as a formal parameters
//2. Outside as function:
//  It is called as a global variable has global scope.
int x = 100;        //Global Variable with default value 0.
void display(){
    {
       int p = 25;         //This variable p is only available in the curly braces scope.
    }
    int a = 10,b = 20; //Variables are local to the display() function.
    cout<<x<<endl;
}


int main(){
    int x = 90;         //Local variable x.
    cout<<x<<endl;
    display();
    return 0;
}