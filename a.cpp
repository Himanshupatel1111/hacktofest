#include <bits/stdc++.h>
using namespace std;
 
#define ll long long 
#define f(i,l,n) for(int i=l;i<n;i++) 
#define E "\n"
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define F first
#define S second
#define all(c) (c).begin(),(c).end()
#define sz(v) (int)(v).size()
#define vi(typ) vector<typ>

const ll Mod=1e9+7;

ll solve()
{
  ll n,u,r,d,l;
  ll D,U,L,R;
  cin >> n >> U >> R >> D >> L;
  l=L,d=D,u=U,r=R;
  
  bool flgl=0,flgu=0,flgr=0,flgd=0;

  if(u<n-1 and r<n-1 and d<n-1 and l<n-1) return cout<<"YES\n",0;

  if(u==n)
  {
    r--;
    l--;
  }
  if(d==n)
  {
    l--;
    r--;
  }

  if(r<0 || l<0 ) return cout<<"NO\n",0;

  l=L,d=D,u=U,r=R;
  if(r==n)
  {
    u--;
    d--;
  }
  if(l==n)
  {
    u--;
    d--;
  }

  if(u<0 || d<0) return cout<<"NO\n",0;
  

  l=L,d=D,u=U,r=R;
  if(u==n-1 and d==n-1)
  {
    if(l<1 || r<1) return cout<<"NO\n",0;
  }


  if(r==n-1 and l==n-1)
  {
    if(d<1 || u<1) return cout<<"NO\n",0;
  }

  if(u==n-1 and l==0 and r==0) return cout<<"NO\n",0;
  if(d==n-1 and l==0 and r==0) return cout<<"NO\n",0;
  if(r==n-1 and u==0 and d==0) return cout<<"NO\n",0;
  if(l==n-1 and u==0 and d==0) return cout<<"NO\n",0;

  l=L,d=D,u=U,r=R;
  

  if(r==n)
  {
     u--;
     d--;
     if(l>n-2 and u<n and d<n) return cout<<"NO\n",0;
  }
  

  l=L,d=D,u=U,r=R;

  if(d==n)
  {
     l--;
     r--;
     if(u>n-2 and l<n and r<n) return cout<<"NO\n",0;
  }
  
  l=L,d=D,u=U,r=R;

  if(l==n)
  {
     u--;
     d--;
     if(r>n-2 and u<n and d<n) return cout<<"NO\n",0;
  }
  
  l=L,d=D,u=U,r=R;

  if(u==n)
  {
     l--;
     r--;
  if(d>n-2 and l<n and r<n) return cout<<"NO\n",0;

  }
  cout<<"YES\n";


  return 0;  
}



int main()
{

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    
     ll t = 1;
     fast;
     cin >> t;
     while(t--)
     {
          solve();
     }
     return 0;
}