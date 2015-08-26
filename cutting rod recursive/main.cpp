#include <bits/stdc++.h>

using namespace std;
int solve(int arr[],int n){
    if(n<=0)
        return 0;
        int val=INT_MIN;
    for(int i=1;i<=n;i++)
    val=max(val, arr[i] + solve(arr,n-i));
    return val;
}

int main()
{
    int n;
    cin >> n;
    int arr[n+1];
    for(int i=1;i<=n;i++)
        cin >>arr[i];
    cout <<solve(arr,n)<<endl;
    return 0;
}
