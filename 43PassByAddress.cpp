#include<iostream>
using namespace std; 
void display(int *ptr){
    cout<<*ptr<<endl;
    *ptr = 24;
    
}
int main(){
    int age = 10;
    display(&age);
    cout<<age;
    return 0;
}
