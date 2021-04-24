#include<iostream>
using namespace std;
int main(){
    //Arrays in loops.
    //Let's assign an array, that is going to store 5 integer, and assign a value to each element using for loop.
    //And then print them all.
    int array[5];
    for(int i =0; i<5; i++){
        cout<<"Enter element no. "<<i+1<<endl;
        cin>>array[i];
    }
    cout<<"The elements are : ";
    for(int i =0 ; i<5; i++){
        cout<<array[i]<<"\t";
    }

    return 0;
}