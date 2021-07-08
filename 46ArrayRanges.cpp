//Function that operates on specific range of array elements.
#include<iostream>
using namespace std;
void display(const int * start, const int * end);
int main()
{
    int array[] = {11,22,33,44,55,66,77,88,99};
    display(array+3, array+6);
    return 0;
}

void display(const int * start, const int * end)
{
    const int * ptr;
    for(ptr = start; ptr!= end; ptr++)
    {
        cout<< *ptr<< endl;
    }
}