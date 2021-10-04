//Link - https://leetcode.com/problems/number-of-longest-increasing-subsequence/

#include <bits/stdc++.h>
  
using namespace std;
  
typedef long long ll;
typedef vector<ll> v64;
typedef vector<int> v32;
#define dbg(x) cout<<#x<<" = "<<x<<endl
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
  

int findNumberOfLIS(vector<int>& nums) {
    int n = nums.size();
    int ans=1,ans_index=0;
    vector<int> lis(n,1);
    vector<int> ways(n,1);

    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
           if(nums[i]>nums[j]){
                if(lis[i]<1+lis[j]){
                    lis[i] = max(lis[i],1+lis[j]);
                    ways[i] = ways[j];
                }
                else if(lis[i]==lis[j]+1) ways[i]+=ways[j];
            }
        }
        if(lis[i]>ans) ans = lis[i], ans_index = i;
    }
    int total=0;

    for(int i=0;i<n;i++){
        if(lis[i]==ans) total+=ways[i];
    }

    return total;
}


int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];

    cout<<findNumberOfLIS(v);
    return 0;
}