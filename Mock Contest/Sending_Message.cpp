#include <bits/stdc++.h>
using namespace std;

int main()
{
    string word1, word2;
    while (cin >> word1 >> word2)
    {
        string encoded;
        int length = word1.size(), index = 0, target_index = 0;

        while (index < length)
        {
            if (word1[index] != word2[target_index])
            {
                index++;
            }
            else
            {
                encoded += word2[target_index];
                index++;
                target_index++;
            }
        }

        if (encoded == word2)
        {
            cout << "Possible" << endl;
        }
        else
        {
            cout << "Impossible" << endl;
        }
    }
    return 0;
}