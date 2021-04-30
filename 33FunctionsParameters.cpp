#include<iostream>
using namespace std;

void no(int x);
int doub(int x);
int main(){
    no(99);
    cout<<doub(5)<<endl;
    return 0;
}
void no(int x){
    cout<<x<<endl;
}
int doub(int x){
    return 2*x;
}