#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[100];
    int roll;
    int cls;
    char section;
    Student(char *n, int r, int c, char s)
    {
        strcpy(name, n);
        roll = r;
        cls = c;
        section = s;
    }
};
int main()
{
    Student maruf("Maruf Hasan", 69, 17, 'A');
    Student kona("Nishat Jahan Kona", 96, 18, 'B');

    cout << maruf.name << "\t" << kona.name << "\t" << endl;
    cout << maruf.cls << "\t" << kona.cls << "\t" << endl;
    cout << maruf.section << "\t" << kona.section << "\t" << endl;
    cout << maruf.roll << "\t" << kona.roll << "\t" << endl;
    return 0;
}