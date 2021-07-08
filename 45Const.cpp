#include<iostream>
using namespace std;

void display(const int num[], int limit)
{
    for(int i = 0; i < limit ; i++)
    {
        cout<<num[i]<<endl;
    }
}

int main()
{
   int number[] = {11, 22, 33, 44, 55};
   display(number, 5);

    return 0;
}