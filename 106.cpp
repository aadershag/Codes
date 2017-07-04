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
        int A[N+1];
        int max=-200;
        for(int i=0;i<N;i++)
        {
            cin>>A[i];
            if(A[i]>max)
            max=A[i];
        }
        if(max<=0)
        cout<<max<<endl;
        else
        {
            int ans=0,sum=0;
            for(int i=0;i<N;i++)
            {
                if(sum+A[i]>0){
                    sum=sum+A[i];
                    if(sum>ans)
                    ans=sum;
                }
                else
                sum=0;
            }
            cout<<ans<<endl;
        }
    }
}
