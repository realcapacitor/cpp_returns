#include<iostream>
using namespace std;
int main(){
    int i;
    cout<<"Enter How many times you want hello world to print\n";
    cin>>i;
    while(i!=0){
        cout<<"Hello World!\n";
        i-=1;
    }
    return 0;
}