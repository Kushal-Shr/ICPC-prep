#include <iostream>
#include <string>

using namespace std;

class Teacher
{
private:
    double salary;

public:
    string name;
    string department;
    string subject;

    void changeDept(string newDept)
    {
        department = newDept;
    }
};

int main()
{
    Teacher t1;

    t1.name = "Kushal Shrestha";
    t1.department = "CS";
    t1.subject = "Data Structures";

    cout << t1.name << " has a salary of $" << t1.salary << endl;

    return 0;
}