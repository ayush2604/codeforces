#include <bits/stdc++.h>

using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--) {
        string s; cin>>s;
        int n = s.size();
        int zero = 0, one = 0;
        for(char c:s) {
            if(c=='0') zero++; else one++;
        }
        bool flag = true;
        for(int i=0;i<n;i++) {
            char c = s[i];
            if(c=='0') {
                if(one>0) one--;
                else {
                    cout<<(n-i)<<'\n';
                    flag = false;
                    break;
                }
            }
            else {
                if(zero>0) zero--;
                else {
                    cout<<(n-i)<<'\n';
                    flag = false;
                    break;
                }
            }
        }
        if(flag) cout<<0<<'\n';
    }
    return 0;
}