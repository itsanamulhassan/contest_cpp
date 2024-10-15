#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, max = INT_MAX;
    cin >> n;

    vector<int> bags(n);
    for (int i = 0; i < n; i++)
    {
        cin >> bags[i];
    }

    sort(bags.begin(), bags.end(), greater<int>());

    long long int sum = 0;

    for (int i = 0; i < n; i++)
    {
        if (max > bags[i])
        {
            max = bags[i];
        }
        else
        {
            max = max - 1;
        }

        if (max > 0)
        {
            sum += max;
        }
        else
        {
            break;
        }
    }

    cout << sum << endl;

    return 0;
}