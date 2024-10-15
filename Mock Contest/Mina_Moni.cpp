#include <bits/stdc++.h>
using namespace std;

int get_minimum_difference(vector<int> &coins, int N)
{

    int total_sum = 0;
    for (int i = 0; i < N; i++)
    {
        total_sum += coins[i];
    }

    int half_sum = total_sum / 2;

    bool dp[N + 1][half_sum + 1];
    memset(dp, false, sizeof(dp));
    dp[0][0] = true;

    for (int i = 0; i < N; i++)
    {
        for (int j = half_sum; j >= coins[i]; j--)
        {
            for (int k = i; k >= 0; k--)
            {
                dp[k + 1][j] = dp[k + 1][j] || dp[k][j - coins[i]];
            }
        }
    }

    int acceptable_sum = 0;
    for (int j = half_sum; j >= 0; j--)
    {
        if (dp[N / 2][j] || dp[(N + 1) / 2][j])
        {
            acceptable_sum = j;
            break;
        }
    }

    int group_one_sum = acceptable_sum;
    int group_two_sum = total_sum - acceptable_sum;

        return abs(group_two_sum - group_one_sum);
}

int main()
{
    int test_case;
    cin >> test_case;

    for (int i = 0; i < test_case; i++)
    {
        int N;
        cin >> N;
        vector<int> coins(N);

        for (int i = 0; i < N; i++)
        {
            cin >> coins[i];
        }

        cout << get_minimum_difference(coins, N) << endl;
    }

    return 0;
}