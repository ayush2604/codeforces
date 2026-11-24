#include <bits/stdc++.h>

using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--) {
        int n,k; cin>>n>>k; int even=0;
        int ans = INT_MAX;
        for(int i=0;i<n;i++) {
            int x; cin>>x;
            if(x%2==0) even++;
            ans = min(ans,(k - x%k)%k);
        }
        if(k==4) {
            int temp = max(0,2-even);
            ans = min(ans,temp);
        }
        cout<<ans<<'\n';
    }
    return 0;
}