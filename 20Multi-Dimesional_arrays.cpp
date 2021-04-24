#include<iostream>
using namespace std;
int main(){
    //Multi-Dimensional arrays.
    //Multi-Dimesional array holds one or more arrays.
    //Usually it is like array[row][column]
    
    int multiArray[2][3] = {
        {1, 2, 3},
        {7, 8, 9}
    };

    //Above 2D array can also be shown as
    int multArray1[2][3] = {{1, 2, 3}, {7, 8, 9}};

    //To access the element of array we have to call it by its array and column number.
    //And remember counting stats from 0.
    cout<<multiArray[0][2]<<endl;

    //We can create as many dimensional array as we want, but more three dimensions are harder to manage.
    return 0;
}