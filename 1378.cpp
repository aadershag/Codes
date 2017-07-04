#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
int main()
{
    long long x;
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        long long A[N];
        long long X=0;
        for(int i=0;i<N;i++)
        {
            cin>>A[i];
            X=(X+N*A[i]);
            if(i!=0 && i!=N-1)
            X=(X+(N-2)*A[i]);
        }
        cout<<X%mod<<endl;
    }
}
