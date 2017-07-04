#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int A[N];
        int maxa[N];
        int mina[N];
        int min=101;
        int maxi=-1;
        int ans=0;
        for(int i=0;i<N;i++)
        {
            cin>>A[i];
        }
        for(int i=0;i<N;i++)
        {
            for(int j=i+1;j<N;j++)
            {
                if(A[i]<=A[j])
                {
                    ans=max(ans,j-i);
                }
            }
        }
        cout<<ans<<endl;
    }
}
