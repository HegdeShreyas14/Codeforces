#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;
    while (tt--) {
        int a, b;
        cin >> a >> b;
        int xori=0;

        if ((a-1) % 4 == 0) xori=a-1;
        if ((a-1) % 4 == 1) xori= 1;
        if ((a-1) % 4 == 2) xori=a;
        else xori=0;
        

        if (xori == b) {
            cout << a << '\n';
        }
        else if ((xori ^ a) == b) {
            cout << a + 2 << '\n';
        }
        else {
            cout << a + 1 << '\n';
        }
    }
    return 0;
}
