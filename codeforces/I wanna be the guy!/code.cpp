#include <bits/stdc++.h>
#define endl "\n"
#define ll long long
#define mod 1000000007
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    int Xa, Ya;
    set<int> s;
    cin >> Xa;
    for (int i = 0; i < Xa; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    cin >> Ya;
    for (int i = 0; i < Ya; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    if (s.size() == n)
    {
        cout << "I become the guy." << endl;
    }
    else
    {
        cout << "Oh, my keyboard!" << endl;
    }
}
