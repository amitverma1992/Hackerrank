#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)

        cin >> a[i];

    int k=a[n-1];
    int i;
    for(i=n-2;i>=0&& k<a[i];i--){
        a[i+1]=a[i];
        for(int j=0;j<n;j++)
            cout <<a[j]<<" ";
        cout <<endl;

        }
        a[i+1]=k;
        for(int j=0;j<n;j++)
            cout <<a[j]<<" ";
        cout <<endl;

    return 0;
}
