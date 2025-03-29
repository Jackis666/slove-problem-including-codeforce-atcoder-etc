#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a,b;
        cin>>a>>b;
        int ok=true;
        int a11=0,a21=0,b10=0,b20=0;
        for(int i=0;i<n ;i++){
            if((i+1)%2==0){
                if(a[i]=='1') a21++;
                if(b[i]=='0') b20++;
            }
            else{
                if(a[i]=='1') a11++;
                if(b[i]=='0') b10++;
            }
        }
        cout<<(a11<=b20 and a21<=b10?"yes":"no")<<endl;



    }

}
