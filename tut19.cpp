#include <iostream>
using namespace std;

int sum(int a,int b)
{
    cout<<"using function with 2 arguments"<<endl;
    return a+b;
}

int sum(int a,int b,int c)
{
    cout<<"using function with 3 arguments"<<endl;
    return a+b+c;
}

int volume(double r,float h);
int volume(int l,int b,int h);

int main()
{
   cout<<"The sum of 3 and 5  "<<sum(3,6)<<endl;
   cout<<"The sum of 3,6 and 2 "<<sum(3,6,2)<<endl;
   cout<<"The volume of cylinder is "<<volume(4,5)<<endl;
   cout<<"The volume of cube is "<<volume(4,5,6)<<endl;

    return 0;
}

int volume(double r,float h)
{
    return (3.14*r*r*h);
}
int volume(int l,int b,int h)
{
    return (l*b*h);
}

