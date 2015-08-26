#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;
    cin >>tc;
    int n;
    while(tc--){
        cin >> n;
        int arr[n+1];
        int dp[n+1];
        for(int i=0;i<n;i++)
            cin >>arr[i];
        int m=0;
        for(int i=n-1;i>=0;i--){
            m=max(m,arr[i]);
            dp[i]=m;
        }
        long long sum=0;

        for(int i=0;i<n;i++){
            if(arr[i]!=dp[i]){
                sum+=dp[i]-arr[i];
            }
        }
        cout <<sum<<endl;
    }
    return 0;
}
