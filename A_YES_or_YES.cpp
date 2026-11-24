#include <bits/stdc++.h>

using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--) {
        string s; cin>>s;
        string sLower = "";
        for(char c:s) {
            if(c>='A' && c<='Z') c = (char)((int)c + 32);
            sLower = sLower + c;
        }
        if(sLower=="yes") cout<<"YES\n"; else cout<<"NO\n";
    }
    return 0;
}