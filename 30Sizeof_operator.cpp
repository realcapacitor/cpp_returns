#include<iostream>
using namespace std;
int main(){
    /*The sizeof() operator is used to know the size of the data type*/
    cout<<sizeof(int)<<" Bytes"<<endl;
    cout<<sizeof(char)<<" Bytes"<<endl;
    cout<<sizeof(bool)<<" Bytes"<<endl;
    cout<<sizeof(long)<<" Bytes"<<endl;
    cout<<sizeof(double)<<" Bytes"<<endl;
    cout<<sizeof(long double)<<" Bytes"<<endl;
    int *p;
    cout<<sizeof(p)<<" Bytes"<<endl;

    //Size of an array.
    int array[20];
    cout<<sizeof(array)<<endl; //As the array is of integers its size is 20x4 bytes equals to 80 bytes.
    cout<<sizeof(array[20]);   //Size of an single element of array is 4 bytes

    return 0;
}