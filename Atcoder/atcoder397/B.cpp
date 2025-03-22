#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int ans = 0;
    int k=0;
    string anss="";
    int now=1;
    while(k<s.size()){
        if(now==1){
            if(s[k]=='i'){
                anss+=s[k];
                k++;
            }
            else{
                anss+="o";
                ans++;
            }

        }
        if(now==0){
            if(s[k]=='o'){
                anss+=s[k];
                k++;
            }
            else{
                anss+="i";
                ans++;
            }

        }
        now=(now+1)%2;
    }
    if(anss.size()%2==1) ans++;
    cout<<ans;
}
