#include <bits/stdc++.h>
using namespace std;
//Jackis666
struct people{
    bool all=false;
    set<int> have;

};
int main(){
    int n,m,q;
    cin>>n>>m>>q;
    vector<people> a(n+1);
    while(q--){
        int in;
        cin>>in;
        if(in==1){
            int p,h;
            cin>>p>>h;
            a[p].have.insert(h);
        }
        if(in==2){
            int p;
            cin>>p;
            a[p].all=true;
        }
        if(in==3){
            int p,h;
            cin>>p>>h;
            if(a[p].all or a[p].have.count(h)){
                cout<<"Yes\n";
            }
            else{
                cout<<"No\n";
            }
        }
    }

}
