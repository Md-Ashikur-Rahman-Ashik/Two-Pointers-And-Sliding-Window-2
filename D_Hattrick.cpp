#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int testcase;
    cin >> testcase;

    while (testcase--)
    {
        char first, second, third, fourth, fifth, sixth;
        cin >> first >> second >> third >> fourth >> fifth >> sixth;

        if (first == 'W' && second == 'W' && third == 'W')
        {
            cout << "YES\n";
        }
        else if (second == 'W' && third == 'W' && fourth == 'W')
        {
            cout << "YES\n";
        }
        else if (third == 'W' && fourth == 'W' && fifth == 'W')
        {
            cout << "YES\n";
        }
        else if (fourth == 'W' && fifth == 'W' && sixth == 'W')
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}