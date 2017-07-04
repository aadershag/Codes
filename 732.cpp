#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--)
    {
        int N,sum;
        cin>>N>>sum;
        int A[N];
        int hash[1001]={0};
        for(int i=0;i<N;i++)
        {
            cin>>A[i];
            hash[A[i]]++;

        }
        //for(int i=0;i<20;i++)
        //cout<<hash[i]<<endl;
        bool ans=0;
        for(int i=0;i<N;i++)
        {
            for(int j=i+1;j<N;j++)
            {

                if((sum-A[i]-A[j])>0 && hash[sum-A[i]-A[j]]>0)
                {
                    if((sum-A[i]-A[j])==A[i]||(sum-A[i]-A[j])==A[j])
                    {
                        if(hash[sum-A[i]-A[j]]>1){
                        ans=1;
                        cout<<" "<<i<<" "<<j<<endl;}

                    }
                    else{
                    ans=1;
                    cout<<" "<<i<<" "<<j<<endl;
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
}
