#include<iostream>
using namespace std;
int main(){
 
    //Increment assignment operator. a+=b == a=a+b
    int a = 10;
    int b = 5;
    a+=b;
    cout<<a<<endl;
 
    //Decrement assignment operator. a-=b == a=a-b
    int c = 20;
    int d = 25;
    c-=d;
    cout<<c<<endl;
 
    //Multiplication assignment operator. a*=b == a=a*b
    int e = 30;
    int f = 35;
    e*=f;
    cout<<e<<endl;
 
    //Divion assignment operotor. a/=b == a=a/b
    float g = 40;
    float h = 50;
    g/=h;
    cout<<g<<endl;

    //Modulus assignment operator. a%=b == a=a%b
    int i = 500;
    int j =60;
    i%=j;
    cout<<i<<endl;
    
    return 0;
}