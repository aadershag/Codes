#include<bits/stdc++.h>
#define ll      long long
#define s(n)                        scanf("%d",&n)
#define sc(n)                       scanf("%c",&n)
#define sl(n)                       scanf("%lld",&n)
#define sf(n)                       scanf("%lf",&n)
#define ss(n)                       scanf("%s",n)
// Useful constants
#define INF                         (int)1e9
#define EPS                         1e-9
#define MOD                        1000000007
// Useful hardware instructions
#define bitcount                    __builtin_popcount
#define gcd                         __gcd
// Useful container manipulation / traversal macros
#define forall(i,a,b)               for(int i=a;i<b;i++)
#define foreach(v, c)               for( typeof( (c).begin()) v = (c).begin();  v != (c).end(); ++v)
#define all(a)                      a.begin(), a.end()
#define in(a,b)                     ( (b).find(a) != (b).end())
#define pb                          push_back
#define fill(a,v)                    memset(a, v, sizeof a)
#define sz(a)                       ((int)(a.size()))
#define mp                          make_pair
// Some common useful functions
#define maX(a,b)                     ( (a) > (b) ? (a) : (b))
#define miN(a,b)                     ( (a) < (b) ? (a) : (b))
#define checkbit(n,b)                ( (n >> b) & 1)
#define DREP(a)                      sort(all(a)); a.erase(unique(all(a)),a.end())
#define INDEX(arr,ind)               (lower_bound(all(arr),ind)-arr.begin())
using namespace std;
int arr[100][100];
int ans=0;
int visited[100]={0};
void dfs(int arr[][100],int n,int u,int v,int k,int pp)
{
    visited[u]=1;
    if(arr[u][u]==1&&pp==k-1)
    ans++;
    if(pp==k)
    ans++;
    if(pp>k)
    return;
    for(int i=0;i<n;i++)
    {
        if(arr[u][i]==1&&!visited[i])
        dfs(arr,n,i,v,k,pp+1);
    }
}
int main(){
    int t;
    s(t);
    while(t--)
    {
        int n;
        s(n);
       // int arr[n][n];
        forall(i,0,n)
        {
            forall(j,0,n)
            s(arr[i][j]);
        }
        int u,v,k;
        s(u);
        s(v);
        s(k);
        if(k==0)
        cout<<"0\n";
        else{
        dfs(arr,n,u,v,k,0);
        cout<<ans<<endl;
        }
    }
    return 0;
}

