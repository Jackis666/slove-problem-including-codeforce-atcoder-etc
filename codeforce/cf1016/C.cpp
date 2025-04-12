#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int allone=true;
        int nnn=n;
        if(n==1){
            int nn=n;
            int cnt=0;
            while(nn>0){
                nn/=10;
                cnt++;
            }
            cout<<((cnt*k==19)||(cnt*k==23)||(cnt*k==2)?"yes":"no")<<endl;
        }
        else{

            if(k==1){
                bool ok=false;
                for(int i=2;i*i<=n;i++){
                    if(n%i==0){
                        ok=true;
                        break;
                    }
                }
                cout<<(ok?"no":"yes")<<endl;

            }
            else{
                cout<<"no\n";
            }

        }
    }


}
