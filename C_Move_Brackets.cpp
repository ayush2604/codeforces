#include <bits/stdc++.h>

using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        string s; cin>>s;
        int w = 0;
        for(int i=0;i<n;i++) {
            if(s[i]=='(') w++;
            else {
                if(w>0) w--;
            }
        }
        cout<<w<<'\n';
    }
    return 0;
}