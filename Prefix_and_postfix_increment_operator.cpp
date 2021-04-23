#include<iostream>
using namespace std;
int main(){
    //The prefix operator, ++a
    //The prefix operator first incremets the value then assigns it to the variable.
    int a = 10;
    int b = ++a;
    cout<<"b="<<b<<" a="<<a<<endl;

    //The postfic operator, a++
    //The postfix operator first assigns the the value to the variable then icrements.
    int c = 20;
    int d = c++;
    cout<<"d="<<d<<" c="<<c<<endl;

    //Similarly with decrement operators.
    //Prefix.
    int e = 10;
    int f = e--;
    cout<<"f="<<f<<" e="<<e<<endl;

    //Postfix.
    int g = 10;
    int h = --g;
    cout<<"h="<<h<<" g="<<g<<endl;
    return 0;
}