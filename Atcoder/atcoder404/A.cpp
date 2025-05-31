#include <bits/stdc++.h>
using namespace std;
#define int long long
#define Jackis666 ios::sync_with_stdio(0); cin.tie(0)
signed main(){
    Jackis666;
    string a;
    cin>>a;
    int cnt[26]={0};
    for(int i=0;i<a.size();i++){
        cnt[a[i]-'a']=1;
    }
    for(int i=0;i<26;i++){
        if(cnt[i]==0){
            char b='a';
            b+=i;
            cout<<b;
            break;
        }
    }

}
