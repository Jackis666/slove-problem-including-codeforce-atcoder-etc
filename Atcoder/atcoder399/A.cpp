#include <bits/stdc++.h>
using namespace std;
int main(){
    //Jackis666
    int n;
    string a,b;
    cin>>n>>a>>b;
    int ans=0;
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]) ans++;
    }
    cout<<ans;

}
