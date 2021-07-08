#include<iostream>
using namespace std;
struct student{
    int rollNo;
    char sex;
    string name;
};

int main()
{
    student anil;
    student *anilptr;
    anilptr = &anil;

    anil.rollNo = 92;
    anilptr->name = "Anil";
    cout<<anilptr->name<<endl;
    
    return 0;
}