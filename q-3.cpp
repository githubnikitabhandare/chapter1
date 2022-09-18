#include <iostream>
using namespace std;
int main()
{
    int hindi, math, english, science, art, total;
    float percentage;

    cout<<endl<<"Enter the marks of english:";
    cin>>hindi;

    cout<<endl<<"Enter the marks of Math: ";
    cin>>math;

    cout<<endl<<"Enter the marks of Marathi: ";
    cin>>english;

    cout<<endl<<"Enter the marks of Social-Science: ";
    cin>>science;

    total = hindi+math+english+science+art;

    percentage = total/5;

    cout<<endl<<"Aggregate marks:"<<total;
    cout<<endl<<"Percentage marks:"<<percentage;

    return (0);
}