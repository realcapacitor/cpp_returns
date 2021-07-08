#include<iostream>
using namespace std;
//The word inline will copy the code in the function to the place from where it is being called, to save execution time. Avoid using for large function.
inline void display(int a){
    cout<<a<<endl;
}
int main(){
    display(10);
    return 0;
}