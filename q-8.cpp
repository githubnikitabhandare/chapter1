#include<iostream>
using namespace std;
int main()
{
    int number=0, n;
    cout<<endl<<"Enter a number: ";
    cin>>n;
    while(n!=0)
    {
        number = number * 10;
        number = n % 10 + number;
        n = n/10;
    }
    cout<<endl<<number;
    return 0;
}