#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n+1];
    int dp[n+1];
    for(int i=0;i<n;i++){
        cin >>a[i];
        dp[i]=1;
    }
    for(int j=0;j<10;j++)
    for(int i=1;i<n;i++){
        if(a[i-1]<a[i] && dp[i]<=dp[i-1])
            dp[i]=dp[i-1] + 1;
            if(a[i-1]>a[i] && dp[i-1]<=dp[i])
                dp[i-1]=dp[i] + 1;
    }
   /* for(int i=0;i<n-1;i++){
        if(dp[i]==dp[i+1] && a[i]>a[i+1])
            dp[i]+=1;

    }*/
   long long sum=0;
    for(int i=0;i<n;i++)
       sum+=dp[i];
       cout << sum<<endl;
    return 0;
}
