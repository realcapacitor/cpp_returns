//Accessing Nested structure members using Arrow Operator. 
#include<iostream>
#include<string>
using namespace std;

struct address{
    int house_no;
    string street_name;
};

struct student{
    string name;
    int rollno;
    address addr;
};

int main(){
    student anil;
    student * anilptr;
    anilptr = &anil;
    anilptr->name  = "Anil";
    anilptr->rollno = 1234;
    anilptr->addr.house_no = 68;
    anilptr->addr.street_name = "Mg road";

    cout<<"Name : "<<anilptr->name<<endl;
    cout<<"Roll no : "<<anilptr->rollno<<endl;
    return 0;
}