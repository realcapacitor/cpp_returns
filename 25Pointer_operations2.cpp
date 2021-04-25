#include<iostream>
using namespace std;
int main(){
    //Basicaly dereferencing is showing the value at the address in the pointer variable.
    int x = 5;
    int * p = &x;
    cout<<x+4<<endl;
    cout<<*p+4<<endl;
    cout<<p<<endl;
    cout<<p+4<<endl;    //here the address is incresed by 4 more numbers i.e. 4 x 4 bytes = 16 bytes.

    //More.
    x = x+4;
    x = *p + 4;
    *p = *p + 4;
`   //All above statements are equivalent.

    return 0;
}