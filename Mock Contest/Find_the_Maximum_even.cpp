#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, max_even = 0;
    cin >> n;
    vector<int> numbers(n);

    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
        if (numbers[i] % 2 == 0 && max_even < numbers[i])
        {
            max_even = numbers[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int sum = numbers[i] + numbers[j];
            if (sum % 2 == 0 && sum > max_even)
            {
                max_even = sum;
            }
        }
    }

    cout << max_even << endl;

    return 0;
}