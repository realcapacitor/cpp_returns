#include<iostream>
using namespace std;
int main(){
    //Data types.
    //Operstiing system allocates memory and selects what will be stored in that memory based on variable's data type
    //Data types decides what kind of data can be stored in the variable and making proper use of indetifier.
    
    //The integer data type contains whole numbers.
    int a = 5;
    int b = -25;
    
    //char data type contains characters and strings.
    char c = 'c';
    char d[4] = "dee";
    
    //float data type saves fractional decimal numbers.
    float e = 3.14;
    float f = 1.414;
    
    //The boolean data type returns just two possible values. 1 and 0
    bool g = true;
    bool h = false;

    cout<<a<<"\n"<<b<<"\n"<<c<<"\n"<<d<<"\n"<<e<<"\n"<<f<<"\n"<<g<<"\n"<<h<<endl;

    return 0;
}