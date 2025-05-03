#include <bits/stdc++.h>
using namespace std;
//Jackis666
int main(){
    int ans=0;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int in;
        cin>>in;
        if(i%2==0) ans+=in;
    }
    cout<<ans;

}
