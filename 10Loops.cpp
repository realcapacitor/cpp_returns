#include<iostream>
using namespace std;
int main(){
    //Loops
    //1.for loop
    //for(int i =0; i<5 ; i++){}
    for(int i =0; i<5 ; i++){
        cout<<"Hello World!"<<endl;
    }

    //2.while loop
    //while(condition){}
    int a = 0;
    while(a<5){
        cout<<a+1<<endl;
        a++;
    }
    
    //3.do while loop
    //do{code}while(codition)
    int b = 10;
    do{
        cout<<"Hell yeah!!!"<<endl;
    }while(b!=10);
    
    return 0;
}