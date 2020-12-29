#include <iostream>
using namespace std;

   struct employee          //or     //  typedef struct employee
 {                                // {
                                   // .........
                                   //  ........
                                   //  ........

                                 // } ep;
    int EID;
    char favchar;
    float salary;
} ;

union money
{
  int rice ;
  char car;
  float pounds;
};

int main()
 {
 enum Meal{ breakfast,lunch,dinner };
 Meal m2 = breakfast; //refered as a data type
cout<<(m2==0); //To check for true or false conditions

//  cout<<breakfast<<endl;
//  cout<<lunch<<endl;
//  cout<<dinner<<endl;


//   union money m1;
//   //  m1.rice=34;
//   //m1.car= 'd';
//   m1.pounds=100;
//   cout<<m1.pounds;

  
  // struct employee deepak;
  // deepak.EID= 007;
  // deepak.favchar='D';
  // deepak.salary= 999999999;
  // cout<<"Deepak's EID: "<<deepak.EID<<endl;
  // cout<<"Deepak's favchar: "<<deepak.favchar<<endl;
  // cout<<"Deepak's salary: "<<deepak.salary<<endl;
  
  
  
  
  
    return 0;
}