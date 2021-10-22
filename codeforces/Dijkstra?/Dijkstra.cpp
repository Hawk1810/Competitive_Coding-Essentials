#include <bits/stdc++.h>
using namespace std;

struct GRAPH {
    int u;
    long long w;
    bool operator < (const GRAPH &o) const{
        return w > o.w;
    }
};
vector <GRAPH> g[100010];
priority_queue <GRAPH> pq;
long long dis[100010];

int from[100010];
vector<int> ans;

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int u, v;
    long long w;
    for(int i = 1; i <= m; i++) {
        scanf("%d %d %lld",&u, &v, &w);
        g[u].push_back({v, w});
        g[v].push_back({u, w});
    }
    for(int i = 2; i <= n; i++){
        dis[i] = 2e12;
    }
    dis[1] = 0;
    pq.push({1, 0});
    while(!pq.empty()){
        int u = pq.top().u;
        long long w = pq.top().w;
        pq.pop();
        for(auto x : g[u]) {
            long long nextw = dis[u] + x.w;
            if(dis[x.u] <= nextw)
                continue;
            from[x.u] = u;
            dis[x.u] = nextw;
            pq.push({x.u, dis[x.u]});
        }
    }
    if(dis[n] == 2e12) {
        cout << -1 << "\n";
        return 0;
    }
    ans.push_back(n);
    while(from[n]) {
        ans.push_back(from[n]);
        n = from[n];
    }
    reverse(ans.begin(), ans.end());
    for(auto x : ans) {
        printf("%d ", x);
    }
	return 0;
}