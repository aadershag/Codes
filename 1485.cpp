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

// C function for extended Euclidean Algorithm
ll gcdExtended(ll a, ll b, ll *x, ll *y);

// Function to find modulo inverse of b. It returns
// -1 when inverse doesn't
ll modInverse(ll b, ll m)
{
    ll x, y; // used in extended GCD algorithm
    ll g = gcdExtended(b, m, &x, &y);

    // Return -1 if b and m are not co-prime
    if (g != 1)
        return -1;

    // m is added to handle negative x
    return (x%m + m) % m;
}

// Function to compute a/b under modlo m
ll modDivide(ll a, ll b, ll m)
{
    a = a % m;
    ll inv = modInverse(b, m);
  //  if (inv == -1)
      // cout << "Division not defined";
   // else
     //  cout << "Result of division is " <<
     return((inv * a) % m);
}

// C function for extended Euclidean Algorithm (used to
// find modular inverse.
ll gcdExtended(ll a, ll b, ll *x, ll *y)
{
    // Base Case
    if (a == 0)
    {
        *x = 0, *y = 1;
        return b;
    }

    ll x1, y1; // To store results of recursive call
    ll gcd = gcdExtended(b%a, a, &x1, &y1);

    // Update x and y using results of recursive
    // call
    *x = y1 - (b/a) * x1;
    *y = x1;

    return gcd;
}
ll fact(int N)
{
    if(N==0)
    return 1;
    int ans=1;
    for(int i=1;i<=N;i++)
    {
        ans=(ans*i)%MOD;
    }
    return ans;
}
ll C(ll n, ll i)
{
    //ll X=(fact(n-i)*fact(i))%MOD;
    ll Y=modDivide(fact(n),fact(i),MOD);

    return modDivide(Y,fact(n-i),MOD);
}
int main(){
    int T;
    s(T);
    while(T--)
    {
        ll K,X,N;
        cin>>N>>K>>X;
        ll A[N];
        forall(i,0,N){
            sl(A[i]);
        }
        sort(A,A+N);
        ll ans=0;
        int i=0,j=1;
        for(i=0;j<N;i++)
        {
            while(A[j]-A[i]<=X&&(j<N))
            {
                j++;
            }
            if(j-i>=K)
            ans=(ans%MOD+C(j-i,K)%MOD)%MOD;
        }
        cout<<ans<<endl;
    }
    return 0;
}
