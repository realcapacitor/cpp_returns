//Pass structure variable and address of a structure variable.
#include<iostream>
using namespace std;
struct student{
    int rollno;
    char sex;
    int age;
};
//structure variable as a parameter
void display(student s){
    cout<<s.rollno<<endl;
    cout<<s.sex<<endl;
    cout<<s.age<<endl;
}
//Address of a struct var
void show(student *s){
    cout<<s->rollno<<endl;
    cout<<s->sex<<endl;
    cout<<s->age<<endl;

}
int main()
{   
    student anil = {
        1234, 'M', 24
    };
    display(anil);
    student * anilptr = &anil;
    show(anilptr);
    return 0;
}
