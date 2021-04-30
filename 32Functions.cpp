#include<iostream>
using namespace std;

char character();

string word();

int one(){
    return 1;
}

void print(){
    cout<<"Hello World!"<<endl;
}

int main(){
    //There are functions in c++ that performs typical tasks.
    //You can define your ow function in c++, that is called user defined functions.
    //Return type:
                //A functions return type is declared before its name. ex. int, void, etc.
    /*
    return-type Name(parameter/argument){
        code;
        return;
    }
    You can also declare  a function first before int main() function and then after int main() define it.
    */
   print();
   cout<<one()<<endl;
   cout<<word()<<endl;
   cout<<character()<<endl;
    return 0;
}

string word(){
    string word = "word";
    return word;
}

char character(){
    return 'a';
}