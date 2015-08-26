#include <bits/stdc++.h>

using namespace std;
int a[1000+1][1000+1];
        bool v[1000+1];
        int par[1000+1];
int main()
{
    freopen("a.out","w",stdout);
    int tc;
    cin >> tc;
    int n,e;
    while(tc--){
        cin >> n>>e;
        memset(a,0,sizeof a);
        memset(par,-1,sizeof par);
        memset(v,0,sizeof v);
        int s,d;
        for(int i=0;i<e;i++){
            cin >>s>>d;
            a[s][d]=1;
            a[d][s]=1;
            }
            cin >>s;
            par[s]=0;
            v[s]=1;
            queue <int> q;
            q.push(s);
            int x;
            while(!q.empty()){
                x=q.front();
                q.pop();
                for(int i=1;i<=n;i++){
                    if(a[x][i]==1 && v[i]==0){
                        v[i]=1;
                        par[i]=par[x] + 1;
                        q.push(i);
                    }
                }
            }
            for(int i=1;i<=n;i++){
                if(par[i]!=-1 && i!=s)
                    cout << 6 * par[i]<<" ";
                else if(i!=s)
                    cout << -1<<" ";
            }
            cout <<endl;



    }

    return 0;
}
