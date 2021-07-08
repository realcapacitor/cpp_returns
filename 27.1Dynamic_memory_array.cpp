#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter size of the array : ";
    cin>>size;
    int *ptr;
    ptr = new int[size];
    for(int i=0; i<size; i++){
        cin>>ptr[i];
    }
    for(int i=0; i<size; i++){
        cout<<"first "<<ptr[i]<<endl;
        
    }
    delete ptr;
    
    return 0;
}