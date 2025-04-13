#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int can=0;
    int have=0;
    for(int i=0;i<n;i++){
        if(s[i]=='o'){
            if(i-1>=0) s[i-1]='.';
            if(i+1<n) s[i+1]='.';
            have++;
        }
    }
    if(have==k){
        for(int i=0;i<n;i++){
            if(s[i]=='?'){
                cout<<".";
            }
            else{
                cout<<s[i];
            }
        }
        return 0;
    }

    vector<int> a;//機算連續?區間
    int now=1;
    for(int i=1;i<n;i++){
        if(s[i]=='?' and s[i]==s[i-1]){
            now++;
        }
        else{
            if(s[i-1]=='?'){
                a.push_back(now);
                now=1;
            }
        }
    }
    if(s[n-1]=='?'){
        a.push_back(now);
    }
    for(int i=0;i<a.size();i++){
        can+=(a[i]+1)/2;
    }

    if(can+have==k){
        int nn=0;
        for(int i=0;i<n;i++){
            if(s[i]=='?'){
                    //cout<<a[nn];
                if(a[nn]%2==0){//?????? can .o.o.o or o.o.o. or o..o.o or o.o..o
                    for(int j=0;j<a[nn];j++){
                       if(j!=0)i++;
                       cout<<"?";
                    }
                }
                else{
                    for(int j=0;j<a[nn];j++){
                        if(j!=0)i++;
                        cout<<(j%2==0?"o":".");
                    }
                }
                nn++;
            }
            else
                cout<<s[i];
        }
    }
    else{
        cout<<s;
    }




}
