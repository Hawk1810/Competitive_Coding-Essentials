//GCD 

#include<bits/stdc++.h>
using namespace std;

#define RAFTAR ios::sync_with_stdio (NULL);
#define INPUT  cin.tie (NULL);
#define OUTOUT  cout.tie (0);
#define prn(n) cout<<n<<"\n"
#define prs(n) cout<<n<<" "
#define pr(n) cout<<n
#define foi(n) for(int i=0;i<n;i++)
#define foj(a,n) for(int j=a;j<n;j++)
#define l long 
#define ll long long
#define nl cout<<"\n"
#define pb push_back
#define lb lower_bound
#define ub upper_bound
typedef map<int,int> mpi;
typedef multimap<int,int> mmpi;
typedef vector<int> veci;
typedef vector<ll> vecl;
typedef vector<string> vecs;
typedef vector<float> vecf;
typedef vector<pair<int,int>> vecp;
int mod=1000003;
int gcd(ll a,ll b)
{
    if(b==0) return a;
    else{ ll x=(a%b); gcd(b,x);}
  
}
/*************************************************************************************************/
int main ()
{
 RAFTAR INPUT OUTOUT
    int TEST=1;
   // cin>> TEST;
    //while( TEST--)
    ll a,b;
    cin>>a>>b;
    if(a==0||b==0) pr(0);
    else{ ll x=(a%b);
     cout<<gcd(b,x);
     }
  return 0;
}
/********************************************************************************************************/



  
