
#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
#define f(i,l,n) for(int i=l;i<n;i++) 
#define E "\n"
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define F first
#define S second
#define all(c) (c).begin(),(c).end()
#define sz(v) (int)(v).size()
#define vi(typ) vector<typ>
#define pii pair<ll,ll>
#define bp __builtin_popcountll

const ll MOD=1e9+7;

string S;
ll len;
ll dp[251][2][4000][2];

ll recur(ll pos,ll flg,ll ex,ll flg1)
{
    if(pos==len) return (flg1==1);

    ll &ans=dp[pos][flg][ex][flg1];
    if(ans!=-1) return ans;
    ans=0; 
    ll r=9;
    if(flg==0) r=S[pos]-'0';
    f(i,0,r+1)
    {
       f(j,0,r+1)
       {
          if(i+ex>=j)
          {
             ll nflg=flg1;
             if(i+ex>j) nflg=1;
             ans=(ans+recur(pos+1, (flg || (i<S[pos]-'0')) ,i+ex-j, (flg1 || (i+ex>j)) ) )%MOD;
            // if(pos==1) cout<<pos<<" "<<i<<" "<<j<<" "<<recur(pos+1, (flg || (i<S[pos]-'0')) ,i+ex-j, (flg1 || (i>0)) )<<E;
          }

       }
      //  cout<<ans<<E;
    }
     cout<<pos<<" "<<flg<<" "<<ex<<" "<<ans<<E;
    return (ans%MOD);
}
ll Sum(ll x)
{
   ll sum=0;
   while(x) sum+=x%10,x/=10;
   return sum;
}
void brute(ll x)
{
   ll ans=0;
   f(i,0,x+1)
   {
      f(j,0,x+1)
      {
         if(Sum(i)>Sum(j)){
             ans++;
             if(i==8) cout<<i<<" "<<j<<E;
         }
      }
   }
   cout<<ans<<E;
}
void solve()
{
   cin >> S;
   len=S.size();
   memset(dp,-1,sizeof dp);
   
   brute(10);
   cout<<(recur(0,0,0,0))%MOD<<E;
}


int main()
{

     
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    
     ll t = 1;
     fast;
     //cin >> t;
     while(t--)
     {
          solve();
     }
     return 0;
}

