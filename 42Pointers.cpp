#include<iostream>
using namespace std;
int main(){
    int age = 24;
    bool human = true;
    int* ageptr = &age;
    bool* humanptr = &human;
    cout<<age<<" --> "<<ageptr<<endl<<human<<" --> "<<humanptr;
    return 0;
}