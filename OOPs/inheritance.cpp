#include <iostream>
#include <string>

using namespace std;

class Person
{
public:
    string name;
    int age;

    Person()
    {
    }
};

class Student : public Person
{
public:
    int grade;

    void getStudentInfo()
    {
        cout << "name: " << this->name << endl;
        cout << "age: " << this->age << endl;
        cout << "grade: " << this->grade << endl;
    }
};

int main()
{
    Student s1;
    s1.name = "Kushal Shrestha";
    s1.age = 20;
    s1.grade = 12;

    s1.getStudentInfo();

    return 0;
}