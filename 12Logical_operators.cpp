#include<iostream>
using namespace std;
int main(){
    //Logical operators
    //and, or and not
    int a = 10;
    int b = 20;
    if(a==10 && b ==20){
        cout<<"And logic"<<endl;
    }
    if(a==10 || b ==20){
        cout<<"Or logic"<<endl;
    }
    if(!(a<10 && b==10)){
        cout<<"Not of and"<<endl;
    }
    return 0;
}