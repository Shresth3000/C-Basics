#include <bits/stdc++.h>
using namespace std;
int main()
{
    char g;
    int c, s, i = 1, cp = 0;
    float sumcredit = 0;
    cout << "Enter number of subjects: ";
    cin >> s;
    while (s > 0)
    {
        cout << "Enter grade of subject: " << i << " and number of credits: " << endl;
        cin >> g;
        cin >> c;
        float gp;
        switch (g)
        {
        case 'O':
            gp = 10;
            break;
        case 'E':
            gp = 9;
            break;
        case 'A':
            gp = 8;
            break;
        case 'B':
            gp = 7;
            break;
        case 'C':
            gp = 6;
            break;
        case 'D':
            gp = 5;
            break;
        case 'F':
            gp = 4;
            break;
        default:
            gp = 0;
        }
        cp = cp + (gp * c);
        sumcredit += c;
        i++;
        s--;
    }
    float gpa = cp / sumcredit;
    cout << "GPA IS: " << gpa;
    return 0;
}