#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        int n, count = 0;cin>>n;
        string s;cin>>s;
        for(int i = 0; i< n; i++){
            if(s[i] == '0') count++;
        }
        float ans = ((float)(120-count)/120)*100;
        if(ans>=75)cout<<"YES\n";
        else cout <<"NO\n";
    }
}
