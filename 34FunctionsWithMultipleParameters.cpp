#include<iostream>
using namespace std;

void printname(string name){
    cout<<name<<endl;
}

void multi(int x, int y){
    cout<<x*y<<endl;
}

int add(int x, int y){
    return x+y;
}

int main(){
    //Multiple parameters(arguments)
    cout<<add(5,6)<<endl;
    multi(4, 5);
    string name;
    cout<<"Enter name :\t";
    cin>>name;
    printname(name);
    return 0;
}