#include<iostream>
#include<string>
using namespace std;
int main(){
    //String:
    //String is an ordered sequence of characters, enclosed in double quotation marks.
    //To use the function of string we need to include string library. Although string library is already included in iostream 
    //library so we do not need to include it exclusively.
    string a = "\'cause I\'m Batman";

    //Character:
    //A char variable holds a 1-byte integer, However instead of interpreting the value of char as an integer, the value
    //value of char is typically interpreted as an ASCII character.
    //It  is enclosed in a single quotes.
    char b = 42;
    char c = 69;
    char d = 'd';
    cout<<a<<"\n"<<b<<"\n"<<c<<"\n"<<d<<endl;
    return 0;
}