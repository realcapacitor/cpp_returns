#include<iostream>
using namespace std;
int main(){
    string firstName;
    string lastName;
    int age;
    float weight;
    float heightInCM;
    long phoneNumber;
    char bloodGroup[5];
    string email;

    cout<<"Enter your first name \t:";
    cin>>firstName;
    cout<<"Enter your last name\t:";
    cin>>lastName;
    cout<<"Enter your age\t:";
    cin>>age;
    cout<<"Enter your weight in KGs\t:";
    cin>>weight;
    cout<<"Enter your height in CMs\t:";
    cin>>heightInCM;
    cout<<"Enter your blood group\t:";
    cin>>bloodGroup;
    cout<<"Enter your mobile number\t:";
    cin>>phoneNumber;
    cout<<"Enter your email id\t:";
    cin>>email;

    cout<<"\n____________________________________________\n";
    cout<<"Name: "<<firstName<<" "<<lastName<<endl<<"Mobile No.: "<<phoneNumber<<"\tEmail id: "<<email<<endl;
    cout<<"Age: "<<age<<"\t\tBlood group: "<<bloodGroup<<endl;
    cout<<"Weight: "<<weight<<"KG"<<"\t\tHeight: "<<heightInCM<<"CM"<<endl;
    float bmi ;
    float heightInM ;
    heightInM = heightInCM/100;
    float square = heightInM * heightInM;
    bmi = float(weight)/square;
    cout<<"BMI: "<<bmi;
    cout<<"\n____________________________________________\n";

    return 0;
}