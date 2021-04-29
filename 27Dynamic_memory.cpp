#include<iostream>
using namespace std;
int main(){
    //delete operator
    //to free up the memory allocated to a pointer delete operator is used.
    int *p = new int;
    *p = 10;
    cout<<*p<<endl;
    delete p;    
    
    //Forgetting to free up memory that has been allocated with new keyword will result in memory leaks,
    //because that memory will stay llocated until program shuts down.
    return 0;
}