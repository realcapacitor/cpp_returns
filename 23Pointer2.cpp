#include<iostream>
using namespace std;
int main(){
    //Using Pointers
    //Now lets declare a pointer to int, float, char and double.
    int x = 10;
    int * ptrx = &x;
    //For pointer to integer, we declared pointer to int x as a *ptrx. Now ptrx contains contains the hexadecimal memory address
    //of integer varible x.

    float y = 20.4;
    float * ptry = &y;
     //For pointer to float, we declared pointer to flaot y as a *ptry. Now ptry contains contains the hexadecimal memory address
    //of float varible y.

    double z = 30.7;
    double * ptrz = &z;
     //For pointer to double, we declared pointer to double z as a *ptrz. Now ptrz contains contains the hexadecimal memory address
    //of double varible z.

    char a = 'P';
    char * ptra = &a;
     //For pointer to character, we declared pointer to char a as a *ptra. Now ptra contains contains the hexadecimal memory address
    //of character varible a.
    //But as it is a character data type compiler thinks if it is string or something and print the address of first element.

    cout<<"Address of x is "<<ptrx<<endl<<"Address of y is "<<ptry<<endl<<"Address of z is "<<ptrz<<endl<<"Address of a is "<<ptra<<endl;

    return 0;
}