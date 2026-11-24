#include <bits/stdc++.h>

using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--) {
        int n,k; cin>>n>>k;
        vector<int> arr(n+1,0);
        string s; cin>>s;
        for(int i=1;i<=n;i++) {
            arr[i] = arr[i-1] + (s[i-1]=='W');
        }
        // cout<<s<<'\n';
        int ans = INT_MAX;
        for(int i=k;i<=n;i++) {
            ans = min(ans,arr[i]-arr[i-k]);
        }
        cout<<ans<<'\n';
    }
    return 0;
}