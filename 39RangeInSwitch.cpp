#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter choice\t";
    cin>>a;
    switch(a){
        case 1 ... 100:
        cout<<"One to hundred";
        break;
        case 101 ... 1000:
        cout<<"One hundred and one to one thousand";
        break;
        default:
        cout<<"Out of range(1 to 1000) or Invalid Entry";
    }
    return 0;
}