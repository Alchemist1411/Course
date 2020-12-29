#include <iostream>
using namespace std;

//  int product(int a,int b)
// {    static int c=0; //---> This wuill excecute only once
//      c=c+1;  // Next time when the function will run, the value of c will be retained
//     return a*b+c;
// }
// !!!! NOTE: Never use inline function with static

float moneyRecived(int currentAmout,float factor=1.07f )  // factor is a default value, it will used if nothing is passed in function in place of factor
{   //!!!! Note: Compelsery arguments should be starting from left most and the default arguments should be always be at the right most  

return currentAmout*factor;
}


int main()
{
//  int a,b;
//  cout<<"Enter the values of a and b"<<endl;
//  cin>>a>>b;
//  cout<<"The product of a and b is "<<product(a,b)<<endl;
//  cout<<"The product of a and b is "<<product(a,b)<<endl;
//  cout<<"The product of a and b is "<<product(a,b)<<endl;
//  cout<<"The product of a and b is "<<product(a,b)<<endl;
//  cout<<"The product of a and b is "<<product(a,b)<<endl;
//  cout<<"The product of a and b is "<<product(a,b)<<endl;
//  cout<<"The product of a and b is "<<product(a,b)<<endl;
//  cout<<"The product of a and b is "<<product(a,b)<<endl;
int money=100000;
cout<<"If u have "<<money<<" Rs in ur bank account, Then u will get the amount of "<<moneyRecived(money)<< " as an inflation amount after 1 year "<<endl;
cout<<"If u are vip and u have "<<money<<" Rs in ur bank account, Then u will get the amount of "<<moneyRecived(money,1.10)<< " as an inflation amount after 1 year "<<endl;
 
 return 0;
}

// ************* Const variable ******************
// int strlen( const char *p)
// {
            //   Just to make the value constant in any programm 
// }