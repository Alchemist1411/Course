#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count; //---> count cannot be increased from here, as it is a syntax error

public:
    void setdata(void)
    {
        cout << "Enter the id of Employee" << endl;
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "The id of employee is " << id << " and this is employee number " << count << endl;
    }
    static void getcount(void)
    {// cout<<id; ---> It will show an error
        cout << "The value of count is " << count << endl;
    }
};

//count is the static data member of class Employee
int Employee ::count = 1000; //Default value is 0 and //count can be increased from here

int main()
{
    Employee deepak, rohit, ashwin;

    deepak.setdata();
    deepak.getdata();
    Employee::getcount();

    rohit.setdata();
    rohit.getdata();
    Employee::getcount();

    ashwin.setdata();
    ashwin.getdata();
    Employee::getcount();

    return 0;
}