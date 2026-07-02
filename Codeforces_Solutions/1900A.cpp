#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        bool has_3 = false;
        int empty_cnt = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '.' && i + 1 < n && s[i + 1] == '.' && i + 2 < n && s[i + 2] == '.')
            {
                has_3 = true;
                break;
            }
            if (s[i] == '.')
                empty_cnt++;
        }

        if (has_3)
            cout << 2 << endl;
        else
            cout << empty_cnt << endl;
    }
    return 0;
}