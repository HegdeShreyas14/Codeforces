#include <bits/stdc++.h>
using namespace std;


using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;

const int INF = 1e9;
const ll LINF = 1e18;
const ll MOD = 1e9 + 7; // Change to 998244353 if required by problem

// Primality Test: O(sqrt(N)) using 6k +/- 1 optimization
bool isPrime(ll n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (ll i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

// Fast Modular Exponentiation: O(log exp) -> (base^exp) % MOD
ll power(ll base, ll exp) {
    ll res = 1;
    base %= MOD;
    while (exp > 0) {
        if (exp % 2 == 1) res = (res * base) % MOD;
        base = (base * base) % MOD;
        exp /= 2;
    }
    return res;
}

// Modular Inverse (via Fermat's Little Theorem): O(log MOD)
// Used for division under modulo: (a / b) % MOD == (a * modInverse(b)) % MOD
ll modInverse(ll n) {
    return power(n, MOD - 2);
}

// Palindrome Check for Strings: O(N)
bool isPalindrome(const string &s) {
    int l = 0, r = (int)s.length() - 1;
    while (l < r) {
        if (s[l] != s[r]) return false;
        l++; r--;
    }
    return true;
}

// Palindrome Check for Numbers: O(log10 N) -> Avoids string overhead
bool isNumPalindrome(ll n) {
    if (n < 0) return false;
    ll original = n, reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + (n % 10);
        n /= 10;
    }
    return original == reversed;
}


const int MAX_NODES = 2e5 + 5; // Standard constraints upper limit
vector<int> adj[MAX_NODES];
bool visited[MAX_NODES];

// Depth-First Search (DFS): O(V + E)
void dfs(int node) {
    visited[node] = true;

    // Process the current node here if needed

    for (int neighbor : adj[node]) {
        if (!visited[neighbor]) {
            dfs(neighbor);
        }
    }
}

// Breadth-First Search (BFS): O(V + E)
// Returns shortest distances from 'start' node (-1 means unreachable)
vector<int> bfs(int start, int total_nodes) {
    vector<int> dist(total_nodes + 1, -1);
    queue<int> q;

    dist[start] = 0;
    q.push(start);

    while (!q.empty()) {
        int curr = q.front();
        q.pop();

        for (int neighbor : adj[curr]) {
            if (dist[neighbor] == -1) {
                dist[neighbor] = dist[curr] + 1;
                q.push(neighbor);
            }
        }
    }
    return dist;
}


void solve() {
    int n, k; cin >> n >> k;
        vector<int> A(n);
        for (auto& x : A) cin >> x;
        sort(A.begin(), A.end());
        vector<pair<int, int>> a = {{A[0], 1}};
        for (int i = 1; i < n; ++i) {
            if (A[i] == A[i - 1]) a.back().second++;
            else a.emplace_back(A[i], 1);
        }

        while (a.size() > 0) {
            n = a.size();
            if (a[n - 1].second % 2 == 0) {
                cout << "YES\n";
                return;
            }
            if (n == 1) {
                cout << "NO\n";
                return;
            }
            if (a[n - 1].first - a[n - 2].first <= k) {
                cout << "YES\n";
                return;
            }
            a.pop_back();
        }
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
