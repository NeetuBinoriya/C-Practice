#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a Number for Checking prime Number : \n";
    cin>>num;
    for (int i = 2; i <= num; i++)
    {
        if (num % i == 0)
        {
            cout<<"Given Number is Not a Prime Number \n";
            break;
        }
        if (i == num)
        {
            cout<<"Given Number is a Prime Number";
    
        }
    }
    
}