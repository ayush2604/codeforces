#include <bits/stdc++.h>

using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--) {
        long long n,k,q; cin>>n>>k>>q;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        long long maxLen = 0, ans = 0;
        for(int i=0;i<n;i++) {
            if(a[i] <= q) {
                maxLen++;
            }
            else {
                if(maxLen >= k) ans += ((maxLen-k+1)*(maxLen-k+2)/2);
                maxLen = 0;
            }
        }
        if(maxLen >= k) ans += ((maxLen-k+1)*(maxLen-k+2)/2);
        cout<<ans<<'\n';
    }
    return 0;
}