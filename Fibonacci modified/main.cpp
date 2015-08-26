#include <bits/stdc++.h>

using namespace std;


string mult(string A){
    string res="";
    int carry=0;
    int n=A.size();
    int x;
    int res2;
    string res3="";
    int k;
    for(int i=n-1;i>=0;i--){
            carry=0;
            res="";
        for(int j=n-1;j>=0;j--){
            x= (A[j]-'0') * (A[i]-'0');
        res2= (x%10) + carry;
        carry=x/10;
        res= res + (char)(res2 +'0');
        }
        while(carry){
            res= res + (char)((carry%10)+'0');
            carry/=10;
        }
        k=i;
        reverse(res.begin(),res.end());
        while(k!=n-1){
            res+='0';
            k++;
        }

       // if(!res3.empty())
        //  res3=  add(res3,res);
        //  else
            res3=res;
        //res3=res;

    }
    cout << res3 <<endl;
}

int main()
{
    string A,B;
    int N;
   // cin >>A>>B >>N;
    string t;
    //for(int i=3;i<=N;i++){
          t=  mult("25");
       // t=add(string t,string A);
       // A=B;
       // B=t;
    //}
    //cout << B<<endl;
    return 0;
}
