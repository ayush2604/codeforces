#include <bits/stdc++.h>

using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>>n;
    int ans = 0;
    while(n) {
        if(n&1) {
            n--;
            ans++;
        }
        n = n>>1;
    }
    cout<<ans;
    return 0;
}