#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string n;
        cin>>n;
         int zero=0,cnt=0;
        for(int i=0;i<n.size();i++){
            if(n[i]=='0'){

                zero++;
            }
            else{
                cnt=max(cnt,zero+1);
            }
        }
        cout<<n.size()-cnt<<endl;

    }


}
