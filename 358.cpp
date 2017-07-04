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
int main(){
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        s(N);
        int arr[N];
        forall(i,0,N)
        {
            s(arr[i]);
        }
        sort(arr,arr+N);
        ll ans=0;
        int k=2;
        forall(i,0,N-2)
        {
            forall(j,i+1,N-1)
            {
                //if(k==N)
                //break;
                while(arr[i]+arr[j]>arr[k])
                {
                    if(k==N-1)
                break;
                    k++;
                }
               // cout<<k-j<<endl;
                ans+=(k-j);

            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
