#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[100];
    int roll;
    int cls;
    char section;
};
int main()
{
    Student maruf;
    maruf.roll = 29;
    maruf.cls = 16;
    maruf.section = 'A';
    char nm[100] = "Maruf";
    strcpy(maruf.name, nm);

    Student kona;
    kona.roll = 96;
    kona.cls = 17;
    kona.section = 'B';
    char nm2[100] = "Kona";
    strcpy(kona.name, nm2);

    cout << maruf.section << "\t" << kona.section << "\t" << endl;
    cout << maruf.name << "\t" << kona.name << "\t" << endl;
    cout << maruf.roll << "\t" << kona.roll << "\t" << endl;
    return 0;
}