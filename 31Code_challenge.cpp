/*
You are working on a ticketing system. A ticket costs $10.
The office is running a discount campaign: each the group of 5 people is getting a discount,
which is determined by the age of the youngest person in the group.
You need to create a program that takes ages of all 5 people as input and
outputs the total price of all five tickets.
*/



#include <iostream>
using namespace std;

int main() {
    int ages[5];

    for (int i = 0; i < 5; ++i) {
        cin >> ages[i];
    }
    
    double youngest = ages[0];
    for (int a = 0; a <5; ++a)
    {
        if(youngest>ages[a])
        {
            youngest = ages[a];
        }
    }
    
    double prezzo = 50 - (50*youngest/100);
    cout << prezzo;
    
    return 0;
}