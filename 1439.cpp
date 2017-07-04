#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N,M;
        cin>>N>>M;
        string A,B;
        cin>>A>>B;
        int lcs[N+1][M+1];
        int ans=0;
        for(int i=0;i<=N;i++)
        {
            for(int j=0;j<=M;j++)
            {
                if(i==0||j==0)
                lcs[i][j]=0;
                else
                {
                    if(A[i-1]==B[j-1])
                    {
                        lcs[i][j]=lcs[i-1][j-1]+1;
                        ans=max(ans,lcs[i][j]);
                    }
                    else
                    lcs[i][j]=0;
                }
            }
        }
        cout<<ans<<endl;
    }
}
