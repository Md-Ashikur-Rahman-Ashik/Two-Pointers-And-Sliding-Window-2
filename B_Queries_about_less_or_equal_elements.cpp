#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

template <class T>
using pbds = tree<T, null_type,
                  less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    int firstSize, secondSize;
    cin >> firstSize >> secondSize;

    map<int, int> integerMap;
    pbds<int> p;
    vector<int> integerVector(secondSize);

    for (int i = 0; i < firstSize; i++)
    {
        int integerValue;
        cin >> integerValue;
        p.insert(integerValue);
        integerMap[integerValue]++;
    }

    for (int i = 0; i < secondSize; i++)
    {
        cin >> integerVector[i];
    }

    for (int i = 0; i < secondSize; i++)
    {
        int count;
        count = p.order_of_key(integerVector[i]);
        count = count + integerMap[integerVector[i]];

        cout << count << " ";
    }

    return 0;
}