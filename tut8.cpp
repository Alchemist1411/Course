#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
// int a=4;
// cout<<"value of a was = "<<a<<endl;
// a=45;
// cout<<"value of a is = "<<a;

// ***********constants in c++*************
// const int b=34;
// cout<<"value of b was = "<<b<<endl;
// b=65;
// cout<<"value of b is = "<<b;

// ***********Manipulaters in C++************
// use the header file <iomanip>

// int a=3, b=78, c=1233;
// cout<<" value of a without setw is: "<<a<<endl;
// cout<<" value of b without setw is: "<<b<<endl;
// cout<<" value of c without setw is: "<<c<<endl;

// cout<<" value of a with setw is: "<<setw(4)<<a<<endl;
// cout<<" value of b with setw is: "<<setw(4)<<b<<endl;
// cout<<" value of c with setw is: "<<setw(4)<<c<<endl;


// ************Operator precedence  and associativity in C++***************
int a=3, b=4;
// int c=(a*5)+b;----> Operator asociativity from left-->right

int c=((((a*5)+b)-45)+87);
//    ----------------->
cout<<c;


return 0;



}