#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define ld long double
#define vi vector<int>
#define pb push_back
#define pii pair<int, int>
#define mp make_pair
#define mini(a, b) a = min(a, (b))
#define maxi(a, b) a = max(a, (b))
#define mod 1000000007
using namespace std;

int n, m, k, t = 1;
char a;
set<int> p, q;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;
    for (int i = 1; i <= n * m; i++)
    {
        cin >> a;
        k++;
        if (k > m)
            k = 1, t++;
        if (a == 'S')
            p.insert(k), q.insert(t);
    }
    cout << n * m - p.size() * q.size();
}
