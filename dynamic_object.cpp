#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[100];
    int roll;
    int age;
    char section;
    Student(char *n, int r, int a, char s)
    {
        strcpy(name, n);
        roll = r;
        age = a;
        section = s;
    }
};

int main()
{
    char name[100] = "Maruf Hasan";
    Student *maruf = new Student(name, 2263, 25, 'A');
    (*maruf).age = 26;

    cout << (*maruf).age << endl;
    cout << (*maruf).name << endl;
    cout << maruf->section << endl;
    cout << maruf->roll << endl;
    // delete an object
    cout << endl;
    delete maruf;
    cout << (*maruf).age << endl;
    cout << (*maruf).name << endl;
    cout << maruf->section << endl;
    cout << maruf->roll << endl;
    return 0;
}