#include <bits/stdc++.h>

using namespace std;

int main()
{
    int dp[40 + 2];
    dp[0]=dp[1]=dp[2]=dp[3]=1;

    for(int i=4;i<=41;i++)
        dp[i]=dp[i-1] + dp[i-4];


    bool prime[299916];
    int sump[299915 + 1];
    //memset(prime,0,sizeof prime);
    prime[2]=0;
    prime[0]=prime[1]=1;
    sump[2]=1;
    sump[0]=sump[1]=0;

    for(int i=3;i<=dp[41];i++){
        for(int j=1;j*j<=i;j++){
            if(prime[j]==0){
                if(i%j==0){
                prime[i]=1;
                  break;
                }

            }

        }
        if(prime[i]==0)
            sump[i]=sump[i-1] + 1;
            else
                sump[i]=sump[i-1];


    }

    int tc;
    cin >>tc;
    int n;
    while(tc--){
            cin >> n;
            cout << sump[dp[n]]<<endl;

    }

    return 0;
}
