#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,e,f,g;
    cout<< "@@@...Simple Arithmetics...@@@\n" <<endl;
    cout<<"Enter 1st Number:" <<endl;
    cin>>a;
    cout<<"Enter 2nd Number:" <<endl;
    cin>>b;
    c = a+b;
    cout<<"Sum = "<<c <<endl;
    d = a-b;
    cout<<"Difference = "<<d <<endl;
    e = a*b;
    cout<<"Product = "<<e <<endl;
    f = a/b;
    cout<<"Division = "<<f <<endl;
    g = a%b;
    cout<<"Modulos = "<<g <<endl;
    return 0;
}
