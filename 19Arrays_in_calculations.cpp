#include<iostream>
using namespace std;
int main(){
    //Calculating sum of all elements of an array using for loop.
    int a[] = {1, 43, 564, 12, 5};
    int b=0;
    for(int i=0; i<5; i++){
        b+=a[i];    //b=b+a[i];
    }
    cout<<b<<endl;
    return 0;
}