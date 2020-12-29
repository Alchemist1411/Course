#include <iostream>
using namespace std;

//Factorial of a Number
//Ex:- 6!=6*5*4*3*2*1=720
//0!=1 --> By Definition
//1!=1 --> By Definition
//n!= n*(n-1)!
// ****************Recursions***************

int factorial(int n)
{
  if (n<=1)
  {
      return 1;                            
  }
  return n*factorial(n-1);
}
//Step by step process
//factorial(4)= 4 * factorial(3);
//factorial(4)= 4 * 3 * factorial(2);
//factorial(4)= 4 * 3 * 2 * factorial(1);
//factorial(4)= 4 * 3 * 2 * 1;
//factorial(4)=24;

int fib(int n)
{
  if (n<2)
  {
    return 1;
  }
  return fib(n-1)+fib(n-2);
}

int main()
{ 
    int a;
     cout<<"Enter the Number"<<endl;
     cin>>a;
    //  cout<<"The factorial of "<<a<<" is "<<factorial(a);
     cout<<"The term in Fibonacci series at position "<<a<<" is "<<fib(a)<<endl;
    return 0;
}