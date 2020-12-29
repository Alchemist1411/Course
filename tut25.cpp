#include <iostream>
using namespace std;

class Employee
{
    int id;
    int salary;

public:
    void setid(void)
    {
        salary = 12000;
        cout << "Enter the id of employee" << endl;
        cin >> id;
    }
    void getid(void)
    {
        cout << "The id of employee is " << id << endl;
        cout << "salary is " <<salary<< endl;
    }
   
};


int main()
{ 
    Employee jack, jones, nike, puma;
    //  jack.setid();
    //  jack.getid();
    //  jones.setid();
    //  jones.getid();
    //  nike.setid();
    //  nike.getid();
    //  puma.setid();
    //  puma.getid();

    //*************** Using Array form to store more data at a time ******************
    Employee cubecon[3];
    for (int i = 0; i < 3; i++)
    {
        cubecon[i].setid();
        cubecon[i].getid();
    }

    return 0;
}