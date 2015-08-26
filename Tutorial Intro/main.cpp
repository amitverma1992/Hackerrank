#include <bits/stdc++.h>

using namespace std;

int main()
{
    int v;
    int n;
    cin >> v >> n;
    int a[n+1];
    for(int i=0;i<n;i++)
        cin >> a[i];
    int l=0;
    int h=n-1;
    int mid;
    while(l<=h){
        mid=(l+h)/2;
        if(v==a[mid])
            break;
        if(v<a[mid]){
            h=mid;
        }else{
            l=mid+1;
        }
    }
    cout <<mid<<endl;
    return 0;
}
