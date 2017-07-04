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
        int arr[N];
        for(int i=0;i<N;i++)
        {
            cin>>arr[i];
        }
       int ans[N];
       memset(ans,0,sizeof(ans));
        int anss=0;
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(arr[j]<arr[i]&& ans[i]<=ans[j])
                {
                    ans[i]=ans[j]+1;

                }
                 if(anss<ans[i])
                    anss=ans[i];
            }
        }
       // for(int i=0;i<N;i++)
        //cout<<ans[i]<<" ";
        //cout<<endl;
        cout<<anss+1<<endl;
    }
}
