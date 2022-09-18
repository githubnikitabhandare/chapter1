#include <iostream>
using namespace std;
int main()
{
    float km, m, cm, f, in;
    cout<<endl<<"Enter distance in kilometers:";
    cin>>km;
    /* calculate the conversion */
    m = km * 1000;
    cm = km * 1000 * 100;
    f = km * 3280.84;
    in = km * 39370.08;
    cout<<endl<<"The distance in Feet:"<<f;;
    cout<<endl<<"The distance in Inches:"<<in;
    cout<<endl<<"The distance in Meters:"<<m;
    cout<<endl<<"The distance in Centimeters:"<<cm;
    return (0);
}