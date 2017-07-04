#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        int A[N+1];
        int ans[N+1];
        int flag[N+1];
        int ans2,ans1;
        for(int i=1;i<=N;i++)
        {
            cin>>A[i];
        }
        ans[0]=0;
        ans[1]=A[1];
        ans[2]=A[1]+A[2];
        flag[2]=2;
        for(int i=3;i<=N;i++)
        {
            if(flag[i-1]!=2){
            ans[i]=ans[i-1]+A[i];
            flag[i]=flag[i-1]+1;
            }
            else{
                ans1=ans[i-2]+A[i];
                ans2=ans[i-3]+A[i]+A[i-1];
                if(ans[i-1]>=ans2&&ans[i-1]>=ans1)
                {   ans[i]=ans[i-1];
                    flag[i]=0;
                }
                else if(ans1>ans[i-1]&&ans1>=ans2)
                {
                    ans[i]=ans1;
                    flag[i]=1;
                }
                else
                {
                    ans[i]=ans2;
                    flag[i]=2;
                }
            }
        }
        cout<<ans[N]<<endl;
    }
}
