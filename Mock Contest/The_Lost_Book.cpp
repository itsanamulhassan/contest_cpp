#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, code;
    cin >> n;
    vector<int> books(n);
    for (int i = 0; i < n; i++)
    {
        cin >> books[i];
    };

    cin >> code;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        if (books[i] == code)
        {
            flag = true;
            cout << i << endl;
            break;
        }
    };

    if (!flag)
    {
        cout << "-1" << endl;
    }
    return 0;
}