#include <iostream>

using namespace std;
int main(){
    int num, fact;
    cout<<"Enter a Number for Which you want factorial:\n";
    cin>>num;
    fact = num;
    for (int i = 1; i < num; i++)
    {
        cout<<fact<<"*"<<i<<"=";
        fact = fact * i;
        cout<<fact<<endl;
    }
    // cout<<"The Factorial Value is : "<<fact;
    
}