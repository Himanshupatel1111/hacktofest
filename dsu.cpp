class DSU{
   public:
   vector <ll> id , sz;
   DSU(ll n){
      id.resize(n+1);
      sz.resize(n+1);
      for(ll i=0 ; i<=n ; i++){
         id[i] = i;
         sz[i] = 1;
      }
   }

   ll root(ll i){
      while(i != id[i])   id[i] = id[id[i]] , i = id[i];
      return i;
   }

   void uni(ll a, ll b){
      ll ra = root(a);
      ll rb = root(b);
      if(ra == rb)   return;
      if(sz[ra] < sz[rb]) swap(ra,rb);
      id[rb] = ra , sz[ra] += sz[rb];
   }
};
