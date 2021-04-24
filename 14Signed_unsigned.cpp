#include<iostream>
using namespace std;
int main(){
    //We use int data type to store integer value.
    //But as per the need we can make several modifications in the data types as,
    //signed: can hold both negetive and positive values.
    //unsigned: can only hold positive values.
    //short can hold half the default size(4 byte).
    //long can hold double the default size(4 byte)
    signed int a = -3;
    unsigned int b = 33;
    long c = 344; //Similarly,
    long int d = 345;
    short e = 23;
    cout<<a<<"\n"<<b<<"\n"<<c<<"\n"<<d<<"\n"<<e<<"\n";

    //Similary for floats we can use double or long double.
    double f = 4.434;
    cout<<f<<endl;
    
    return 0;
}