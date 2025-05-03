#include <bits/stdc++.h>
using namespace std;
//Jackis666
int main(){
    string a,b;
    cin>>a>>b;
    int sb=b.size();
    int sa=a.size();
    int ok=false;
    for(int i=0;i<sa-sb+1;i++){
        int nowok=true;
        for(int j=0;j<sb;j++){
            if(a[i+j]!='?'){
                if(a[i+j]!=b[j]){
                    nowok=false;
                    break;
                }
            }
        }
        ok=(!ok?nowok:true);
    }
    cout<<(ok?"Yes":"No");

}
