#include<iostream>
using namespace std;
int main()
{
    int n, f, l, sum, num, d=1;
    cout<<endl<<"Enter a number: ";
    cin>>n;

    num = n;
    while(num!=0)
    {
        num = num/10;
        d = d*10;
    }
    d = d/10;
    f = n/d;
    l = n%10;
    sum = f+l;

    cout<<endl<<"Sum of first and last digit is: "<<n<<sum;
}