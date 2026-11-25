#include <bits/stdc++.h>

using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>>n;
    int rem[] = {6,8,4,2};
    // 1 -> 2 -> 3 -> 4 -> 5 -> 6 -> 7 -> 8 -> 9 -> 10 -> 11 -> 12 -> 13 -> 14
    // 8 -> 4 -> 2 -> 6 -> 8 -> 4 -> 2 -> 6 -> 8 -> 4  -> 2  -> 6  -> 8  -> 4.....
    if(n==0) cout<<1; else cout<<rem[n%4];
    return 0;
}