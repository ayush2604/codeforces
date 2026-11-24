#include <bits/stdc++.h>

using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,t; cin>>n>>t;
    if(n==1 && t==10) {
        cout<<-1;
        return 0;
    }
    int digit = t%10;
    if(digit==0) digit = 1;
    for(int i=0;i<n-1;i++) cout<<digit;
    if(t==10) cout<<0; else cout<<digit;
    return 0;
}