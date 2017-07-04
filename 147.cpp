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
    int t;
    s(t);
    while(t--)
    {
        stack<char > st;
        string A;
        cin>>A;
        int flag=0;
        int nn=A.size();
        forall(i,0,nn)
        {
            if(A[i]=='{'||A[i]=='('||A[i]=='[')
               {
                   st.push(A[i]);
                   //cout<<"push_size= "<<st.size()<<endl;
               }
               else
               {
                   if(st.empty())
                   {
                       flag=1;
                       break;
                   }
                   else
                   {
                       char xx=st.top();
                       //cout<<xx<<endl;
                       if((xx=='{'&&A[i]=='}')||(xx=='['&&A[i]==']')||(xx=='('&&A[i]==')'))
                       {
                       st.pop();
                       //cout<<"pop_size= "<<st.size()<<endl;
                       }
                        else
                        {
                            flag=1;
                            break;
                        }
                   }
               }
        }
      //  cout<<"size= "<<st.size()<<endl;
        if(flag==0&&st.empty())
        cout<<"balanced\n";
        else
        cout<<"not balanced\n";
    }
    return 0;
}
