#include<iostream>
using namespace std;

bool check(int a){
    if(a >=18){
        return true;
    }else{
        return false;
    }
}

int main(){
    int age;
    cin>>age;
    
    if(check(age)){
        cout<<"Adult";
    }else{
        cout<<"Kid";
    }

    return 0;
}