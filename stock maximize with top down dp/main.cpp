#include <bits/stdc++.h>

using namespace std;
#define sd(x) scanf("%d", &x) ;
int a[50000 + 5];
long long dp[50000 + 5];
int main()
{

    int tc;
    sd(tc);
    int n;
    while(tc--){
        sd(n);

        for(int i=0;i<n;i++)
            cin>>a[i];
        memset(dp,0,sizeof(dp));
        for(int i=0;i<n-1;i++){
                for(int j=i+1;j<n;j++){
            dp[i]=dp[i]-a[j];
            dp[i]=max(dp[i],dp[i]+ a[j]);
            }
        }
        for(int i=0;i<n;i++)
            cout << dp[i]<< " ";
        cout <<endl;


    }

    return 0;
}
