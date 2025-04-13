#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool logi=false;
    int ans=0;
    while(n--){
        string in;
        cin>>in;
        if(in=="login"){
            logi=true;
        }
        if(in=="logout"){
            logi=false;
        }
        if(in=="private"){
            if(!logi) ans++;
        }
    }
    cout<<ans;


}
