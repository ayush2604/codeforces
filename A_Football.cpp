#include <bits/stdc++.h>

using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>>n;
    map<string,int> m;
    while(n--) {
        string s; cin>>s;
        if(m.find(s)!=m.end()) m[s]++;
        else m[s]=1;
    }
    pair<string,int> winner = {m.begin()->first, m.begin()->second};
    for(auto const& [key,val]:m) {
        if(val > winner.second) {
            winner.first = key;
            winner.second = val;
        }
    }
    cout<<winner.first;
    return 0;
}