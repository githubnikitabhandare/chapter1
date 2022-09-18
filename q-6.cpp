#include <iostream>
using namespace std;
int main()
{
    int C, D, T;
     cout<<endl<<"Enter the value of C: ";
     cin>>C;

     cout<<endl<<"Enter the value of D: ";
     cin>>D;

     C = C+D; //c=30, d=20
     D = C-D; //d=10, c=30
     C = C-D; //c=20


     cout<<endl<<"The value of C:"<<C;
     cout<<endl<<"The value of D:"<<D;
     return (0);
}