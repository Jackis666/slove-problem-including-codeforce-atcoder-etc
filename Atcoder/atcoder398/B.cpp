#include <bits/stdc++.h>
using namespace std;
int main(){
//Jackis666
    int a[14]={0};
    for(int i=0;i<7;i++){
        int n;
        cin>>n;
        a[n]++;
    }
    int ok2=0,ok3=0,ok4=0;
    for(int i=1;i<14;i++){
        if(a[i]>=4){
            ok4++;
        }
        else if(a[i]>=3){
                ok3++;

        }
        else if(a[i]>=2){
                ok2++;

        }
    }
    bool ok=false;
    if(ok2>=1 and ok3>=1){
        ok=true;
    }
    if((ok2==0 and ok3>=1)or(ok3==0 and ok2>=1)){
        if(ok4>0) ok=true;
    }
    if(ok2==0 and ok3==0){
        if(ok4>1) ok=true;
    }
    cout<<(ok?"Yes":"No");



}
