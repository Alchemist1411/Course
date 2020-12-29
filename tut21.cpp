#include <iostream>
using namespace std;

class employee
{
   private:
         int a,b,c;
   public:
         int d,e;
        void setData(int a1,int b1,int c1); // Declaration
        void getData()  
        { 
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
            cout<<"The value of d is "<<d<<endl;
            cout<<"The value of e is "<<e<<endl;
        }                                       

};

void  employee :: setData(int a1,int b1, int c1)
{
   a=a1;
   b=b1;
   c=c1;
}

int main()
{
    employee deepak;
//  deepak.a=15;---->This will show error, as "a" is declred as private memeber #Nosence
    deepak.d=13;
    deepak.e=14;
    deepak.setData(8,4,5);
    deepak.getData() ;     
    return 0;
}