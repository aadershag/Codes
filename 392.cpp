#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        string A;
        cin>>A;
        int N=A.size();
        int arr[N+1][N+1];
        pair<int,int> arr2[N+1][N+1];
        for(int i=0;i<=N;i++)
        {
            arr[i][0]=0;
            arr[0][i]=0;
        }
        for(int i=1;i<=N;i++)
        {
            for(int k=1;k<=N-i+1;k++)
            {
                int j=k+i-1;
                if(j==k){
                arr[k][j]=1;
                arr2[k][j].first=k;
                arr2[k][j].second=k;
                }
                else if(j-k==1)
                {
                    if(A[j]==A[k]){
                    arr[k][j]=2;
                    arr2[k][j].first=k+1;
                    arr2[k][j].second=j+1;
                    }
                    else{
                    arr[k][j]=1;
                    arr2[k][j].first=k;
                    arr2[k][j].second=k;
                    }
                }
                else
                {
                    if(A[j]==A[k] && arr[k+1][j-1]==j-k-1){
                        arr[k][j]=2+arr[k+1][j-1];
                        arr2[k][j].first=k+1;
                    arr2[k][j].second=j+1;
                        }
                    else
                    {
                        //arr[k][j]=max(arr[k+1][j],arr[k][j-1]);
                        if(arr[k+1][j]>arr[k][j-1])
                        {
                                arr[k][j]=arr[k+1][j];
                                arr2[k][j].first=arr2[k+1][j].first;
                    arr2[k][j].second=arr2[k+1][j].second;
                        }
                        else{
                            arr[k][j]=arr[k][j-1];
                            arr2[k][j].first=arr2[k][j-1].first;
                    arr2[k][j].second=arr2[k][j-1].second;
                        }
                    }
                }
                cout<<arr2[k][j].first<<" "<<arr2[k][j].second<<" ";
            }
            cout<<endl;
        }
        //cout<<arr[1][N]<<endl;
       // cout<<arr2[1]
        char ans[N+1];
        int i;
        int j=0;
        for( i=arr2[1][N].first;i<=arr2[1][N].second;i++)
        ans[j++]=A[i-1];
        ans[j]='\0';
        cout<<ans<<endl;
    }
}
