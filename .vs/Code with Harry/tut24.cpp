#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the id " << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this employee is : " << id << " & this is employee number " << count << endl;
    }
    static void getCount(void)
    {
        // cout << id << endl; throws an error. 
        cout << "The value of count is " << count << endl;
    }
};

// Count is the static data member of class Employee.
int Employee ::count; // Default value is 0. 

int main()
{
    Employee harsh, rahul, nilesh;
    // harsh.id;
    // harsh.count;  // Can not do this as id & count are private.
    harsh.setData();
    harsh.getData(); 
    Employee ::getCount();

    rahul.setData();
    rahul.getData();
    Employee ::getCount();

    nilesh.setData();
    nilesh.getData();
    Employee ::getCount();

    return 0;
}