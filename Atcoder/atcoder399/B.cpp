#include <bits/stdc++.h>
using namespace std;
struct p{
};
int main(){
    //Jackis666
    int n;
    cin>>n;
    int cnt[101]={0};
    int p[101];
    for(int i=0;i<n;i++){
        int in;
        cin>>in;
        cnt[in]++;
        p[i]=in;

    }
    int now=0;
    int r[101]={0};
    for(int i=100;i>=0;i--){
        r[i]=now;
        now+=cnt[i];
    }
    for(int i=0;i<n;i++){
        cout<<r[p[i]]+1<<endl;
    }

}
