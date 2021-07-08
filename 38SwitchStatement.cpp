#include<iostream>
using namespace std;
int main(){
    int a ;
    cout<<"Enter choice\t";
    cin>>a;
    switch(a){
        case 1:
        cout<<"One";
        break;
        case 2:{
        cout<<"Two";
        break;}
        case 3:
        cout<<"Three";
        break;
        default:
        cout<<"Don\'t know !";
    }
    return 0;
}