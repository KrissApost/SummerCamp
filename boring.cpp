#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    string s[n];
    map<string,long long> br;
    for(int i = 0; i < n; i++){
        cin >> s[i];
        sort(s[i].begin(),s[i].end());
        br[s[i]]++;
    }
    long long k = 0;
    for(auto p : br){
        k = k + p.second * (p.second - 1) / 2;
    }
    cout << k;

    return 0;
}
