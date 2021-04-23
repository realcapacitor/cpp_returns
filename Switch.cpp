#include<iostream>
using namespace std;
int main(){
    //Sometimes there is need to check multiple variables for equality against multiple values. So instead of using long and 
    //repeatative if statements we use switch statements
    //switch(expression){
    // case val:
    //      statement1;
    //      break;   
    //  case val2:
    //        statement2;
    //        break;
    //}
    
    int a = 1;
    switch(a){
        case 0:
        cout<<"zero";
        break;
        case 1:
        cout<<"one";
        break;
        case 2:
        cout<<"two";
        break;
        default:
        cout<<"don't know";
    }

    return 0;
}