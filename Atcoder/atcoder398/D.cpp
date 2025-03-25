#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, r, c;
    string s;
    cin >> n >> c >> r >> s;

    set<pair<int, int>> smoke;
    smoke.insert({0, 0});
    string ans;
    int x=0,y=0;
    //r=-r;
    for (char i : s) {

        if(i=='S'){c--;y--;}
        if(i=='N'){c++;y++;}
        if(i=='E'){r--;x--;}
        if(i=='W'){r++;x++;}
        ans+=smoke.count({r,c})?"1":"0";
        //cout<<r<<c<<smoke.count({x,y})<<smoke.count({r,c})<<endl;
        if(!smoke.count({x,y})){smoke.insert({x,y});}

    }
    cout << ans << endl;
}
