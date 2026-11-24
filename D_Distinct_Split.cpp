#include <bits/stdc++.h>

using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        string s; cin>>s;
        vector<int> prefix(n,0);
        vector<int> suffix(n,0);
        map<char,int> m;
        int count=0;
        for(int i=0;i<n;i++) {
            char ch = s[i];
            if(m.find(ch)==m.end()) {
                m[ch] = 1;
                count++;
            }
            prefix[i] = count;
        }
        count=0;
        m.clear();
        for(int i=n-1;i>=0;i--) {
            char ch = s[i];
            if(m.find(ch)==m.end()) {
                m[ch] = 1;
                count++;
            }
            suffix[i] = count;
        }
        int ans = INT_MIN;
        for(int i=0;i<n-1;i++) ans = max(ans,prefix[i]+suffix[i+1]);
        cout<<ans<<'\n';
    }
    return 0;
}