#include<iostream>

using namespace std;
int main(){
    int a = 20, b =30;
    int swap;
    swap = a;
    a = b;
    b = swap;
    cout<<"Swapping Value of a and b is : "<< a<<" "<<b;
}