#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--)
    {
        int N,M;
        cin>>N>>M;
        string A,B;
        cin>>A>>B;
        int ans[N+5][M+5];
        for(int i=0;i<=N;i++)
        {
            for(int j=0;j<=M;j++)
            {
                if(i==0||j==0)
                ans[i][j]=0;
                else
                {
                    //cout<<"a";
                    if(A[i-1]==B[j-1])
                    ans[i][j]=ans[i-1][j-1]+1;
                    else
                    ans[i][j]=max(ans[i-1][j],ans[i][j-1]);
                }
              //  cout<<ans[i][j]<<" ";
            }
            //cout<<endl;
        }
        cout<<ans[N][M]<<endl;
    }
}
