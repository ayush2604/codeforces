#include <bits/stdc++.h>

using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b; cin>>a>>b;
    int ans=0,burnt=0;
    while(a>0) {
        ans += a;
        burnt += (a%b);
        a = (a/b);
        if(burnt >= b) {
            a += (burnt/b);
            burnt = burnt%b;
        }
    }
    cout<<ans;
    return 0;
}