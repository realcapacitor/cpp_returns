#include<iostream>
using namespace std;

void show(int numbers[], int length){
    for(int counter =0; counter< length ; counter++){
         cout<<numbers[counter]<<" ";
    }
}

int main(){
    int numbers[] = {23, 43, 54, 21, 44, 55};
    int length = 6;
    show(numbers, length);
    return 0;

}