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
Student func()
{
    char name[100] = "Maruf Hasan";
    Student maruf(name, 2263, 25, 'A');
    return maruf;
}
int main()
{
    Student maruf = func();
    cout << maruf.age << endl
         << maruf.roll << endl
         << maruf.section << endl
         << maruf.name << endl;
    return 0;
}