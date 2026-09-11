#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int roll;
    string branch;

public:
    void input()
    {
        cout << "Enter student name: ";
        cin >> name;

        cout << "Enter roll number: ";
        cin >> roll;

        cout << "Enter branch: ";
        cin >> branch;
    }

    void display()
    {
        cout << "\nStudent Details";
        cout << "\nName: " << name;
        cout << "\nRoll Number: " << roll;
        cout << "\nBranch: " << branch << endl;
    }
};

int main()
{
    Student s;

    s.input();
    s.display();

    return 0;
}
