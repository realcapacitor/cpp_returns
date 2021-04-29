#include<iostream>
using namespace std;
int main(){
    //Dynamic memory can also be allocated for arrays(Contagious memory locaions).
    int *p = NULL;  //Pointer initialized with NULL.
    p = new int[20];    //Request memory.
    for(int i =0; i<5; i++){    //Filling array with values
        cin>>*(p+i);
    }
    for(int i =0; i<5 ; i++){    //Reading data in the array
        cout<<p+i<<"\t";
        cout<<*(p+i)<<"\n";
        
    }
    delete []p;         //Delete array pointed to by p
    return 0;
}