#include<iostream>
using namespace std;

int main()
{
int age;
// **********Selection control structure: if else-if else ladder****************
// cout<<"Tell me ur age"<<endl;
// cin>>age;
// if ((age<18) && (age>0))
// {
//   cout<<"you can not come to my party"<<endl;
// }
// else if (age==18)
// {
//  cout<<"you can come,but with the permission"<<endl;
// }
// else if (age>18)
// {
//     cout<<"you can come to my party"<<endl;
// }
// else 
// {
//     cout<<"you are not yet born"<<endl;
// }


// ****************Selection control structure: Switch case statment*************
cout<<"tell me your age"<<endl;
cin>>age;
switch (age)
{
case 18:
   cout<<"you are 18"<<endl;
   break;
case 22:
    cout<<"you are 22"<<endl;
    break;
case 2:
    cout<<"you are 2"<<endl;
    break;
default:
    cout<<"some other age"<<endl;
    break;   
}
return 0;
}