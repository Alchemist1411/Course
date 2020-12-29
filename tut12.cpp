#include <iostream>
using namespace std;

int main()
{
  int a=7;
  int *b=&a;  //Or can be written as| int *b;|
                                 // |   b=&a;| 
 //---> Here b is a pointer variable which has the address and value of a

//   & --->(Address of) operator
  cout<<"The address of a is= "<<&a<<endl;
  cout<<"The address of a is= "<<b<<endl;

//   * --->(Value at) or Dereference operator 
     cout<<"The value at address b is= "<<*b<<endl;

//   Pointer to pointer (Pointer dereferencing other pointer)
 int **c=&b;
 cout<<" The address of b is= "<<&b<<endl;
 cout<<" The address of b is= "<<c<<endl;
 cout<<" The value at address of c is= "<<*c<<endl;
 cout<<" The value at address value_at(value_at(c)) is= "<<**c<<endl;

    return 0;
}