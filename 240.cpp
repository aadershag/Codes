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
ll func(ll arr1[],ll arr2[],int N,int start1,int end1,int start2,int end2)
{
    //cout<<start1<<" "<<end1<<" "<<start2<<" "<<end2<<endl;
    int mid1=(start1+end1)/2;
    int mid2=(start2+end2)/2;
    if(N==1)
    return(arr1[0]+arr2[0]);
    if(N==2)
    {
        //cout<<arr1[start1]<<" "<<arr1[end1]<<" "<<arr2[start2]<<" "<<arr2[end2]<<endl;
        return(max(arr1[start1],arr2[start2])+min(arr1[end1],arr2[end2]));
    }
    if(arr1[mid1]>=arr2[mid2])
    return(func(arr1,arr2,ceil(N/2.0),start1,mid1,mid2,end2));
    else
    return(func(arr1,arr2,ceil(N/2.0),mid1,end1,start2,mid2));
}
int main(){
    int T;
    s(T);
    while(T--)
    {
        int N;
        s(N);
        ll arr1[N],arr2[N];
        forall(i,0,N)
        sl(arr1[i]);
        forall(i,0,N)
        sl(arr2[i]);
        cout<<func(arr1,arr2,N,0,N-1,0,N-1)<<endl;
    }
    return 0;
}
