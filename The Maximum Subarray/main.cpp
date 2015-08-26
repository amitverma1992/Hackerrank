#include <bits/stdc++.h>

using namespace std;
int a[100000 + 5];
int lis[100000 + 5];





void mc(int n){

    int s=a[0],e=0;
    int sum=a[0];

    for(int j=0;j<n;j++){
        e+=a[j];
        if(e<0)
            e=0;
        else if(s<e){
            s=e;
        }
        if(sum<sum+a[j]&& j>0)
            sum+=a[j];
    }
    cout << max(s,*max_element(a,a+n));
    cout <<" "<<max(sum,*max_element(a,a+n))<<endl;
}

int main()
{
    int tc;
    cin>>tc;
    int n;

    while(tc--){
        cin >> n;
        for(int i=0;i<n;i++){
            cin >> a[i];
            lis[i]=a[i];
            }
            mc(n);




    }

    return 0;
}
