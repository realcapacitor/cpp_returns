#include<iostream>
using namespace std;
int main(){
	//Pointers:
	//Pointer variables are used to store the memory location of any other variable.
	//The address of any variable can be seen by using & symbol before variable name.
	//This gives us the hexadecimal memory address of that variable.
	//The pointer is a varable, with the address of of another variavle as its value.
	//In c++, tasks like dynamic memory allocation can not performed without using pointers
	int x = 10;
	int * ptr = &x;
	cout<<ptr<<endl;
	return 0;
}