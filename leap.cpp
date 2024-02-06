#include <iostream>

using namespace std;

int main()
{
    int year;
    cout << "Enter a Year for which you want to check: \n";
    cin >> year;
    if (year % 400 == 0)
    {
        cout << "Given year is a Leap Year\n";
    }
    else if ( year % 100 == 0 )
    {
        cout << "Given year is not a Leap Year \n";
    }
    else if ( year % 4 == 0)
    {
        cout << "Given year is a Leap Year \n";
    }
    else{
        cout<<"Given Year is not a Leap Year \n";
    }
}