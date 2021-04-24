#include<iostream>
using namespace std;
int main(){
    //An array is used to store the collection of data, but it may be useful to think of an array as a collection of variables
    //that are of same data type.
    //While declaring an array make sure to specify the type of the element as well as number of elements it will hold.
    //The values in array are separeted by comma in a curly braces, with indexing starting from 0 as a first element.

    int array[5] = {1, 2, 3, 4, 5};
    cout<<array[2]<<endl;
    //Following way of declaring an array is also correct.

    int array1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    cout<<array1[5]<<endl;

    //More examples of arrays
    //Character array aka String
    char c[5] = {'a', 'b', 'c', 'd', '\0'}; //In the end there's a null character \0
    cout<<c<<endl;

    char c1[] = {'a', 'b', 'c', 'd', '\0'}; //In the end there's a null character \0
    cout<<c1<<endl;

    //String array.
    string s[3] = {"Shivam", "Kishor", "Patange"};
    cout<<s[0]<<endl;

    string s1[] = {"Shivam", "Kishor", "Patange"};
    cout<<s1[0]<<endl;

    //Float array.
    float f[5] = {1.2, 4.5, 5.4, 65.5, 88.9}; 
    cout<<f[4]<<endl;


  return 0;

}