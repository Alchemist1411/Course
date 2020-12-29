#include <iostream>
using namespace std;

void sum(int a,int b)
{
    int c=a+b;
    return c;
}
//*****************This method will not sawp the values of a and b*****************
// void swap(int a,int b)            //Swaping: temp |  a | b            
// {                                           
//  int temp=a;                     //          4      4   5    
//  a=b;                            //          4      5   5
//  b=temp;                         //          4      5   4
// return 0;
// }

//***************This will swap the value************************
//############# Call by reference using pointers #################
void swap(int *a,int *b)            //Swaping: temp |  a | b
{                                           
 int temp=*a;                       //          4      4   5    
 *a=*b;                             //          4      5   5
 *b=temp;                           //          4      5   4
return 0;
}

//***************This will swap the value************************
//############# Call by reference using C++ reference variables #################
void swapReferenceVar(int &a,int &b)            //Swaping: temp |  a | b
{                                           
 int temp=a;                       //          4      4   5    
 a=b;                             //          4      5   5
 b=temp;                           //          4      5   4
 return 0;
}


int main()
{
 int a=4,b=5;   
//  cout<<" The sum of 4 and 5 is "<<sum(a,b);
 cout<<" The value of a is  "<<a<<" The value of b is  "<<b<<endl;
 swap(a,b);  //or    swap(&a,&b);
 sawpReferenceVar(a,b);  //or swapReferenceVar(x,y)---> as x and y pointing to same variable i.e. a and b
 cout<<" The value of a after swaping is  "<<a<<" The value of b after swaping is  "<<b<<endl;






    return 0;
}