#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;

    while (testcase--)
    {
        char a, b, c, d, e, f;
        cin >> a >> b >> c >> d >> e >> f;

        if ((a == 'W' && b == 'W' && c == 'W') || (b == 'W' && c == 'W' && d == 'W') || (c == 'W' && d == 'W' && e == 'W') || (d == 'W' && e == 'W' && f == 'W'))
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