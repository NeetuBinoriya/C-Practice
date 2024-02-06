#include <iostream>

using namespace std;
int main(){
    char c;
    cout<<"Enter a Character"<<endl;
    cin>>c;
    if (c=='a' || c =='A'|| c=='e' || c =='E'|| c=='i' || c =='I'|| c=='o' || c =='O'|| c=='u' || c =='U')
    {
        cout<<"Given Character is Vowel ";
    }
    else
    {
        cout<<"Given Character is consonant ";
     }
}