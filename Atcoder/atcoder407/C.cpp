#include <bits/stdc++.h>
using namespace std;
#define int long long
#define Jackis666 ios::sync_with_stdio(0); cin.tie(0)
#define pb(a) push_back(a)
signed main(){
    Jackis666;
    string s;
    cin>>s;
    int ans=0;
    int ch=0;
    int si=s.size()-1;
    while(si>=0){
        int d=((s[si]-'0')+10-ch)%10;
        if(d==0){
            ans++;
            si--;
            //cout<<"a";
        }
        else{
            ans+=d;
            ch+=d;
            ch%=10;
            //cout<<"b";
        }
    }
    cout<<ans;

}
