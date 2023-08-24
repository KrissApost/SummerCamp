#include<bits/stdc++.h>
using namespace std;
long long pow2(int a, int b){
    if(b == 0) return 1;
    while(b > 0){
        a *= 10;
        b--;
    }
    return a;
}

int func(string s) {
int b = s.size()/2;
string sa = "";
long long res = 0;
for (int i = 0; i<b-1;i++) {
    res+=9*pow2(10,i);
}
if(s[b] == '0') return res;
for(int i =0; i<b; i++) {
    if(s[i]<=s[i+b]) sa+=s[i+b];
    else sa+=s[i+b];
}

res+=sa[0]-'0';

for(int i = 1; i<b; i++) {
res+=sa[i]-'0';
}
return res;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string l, r;
    cin >> l >> r;
    int ans = func(r) - func(l);
    cout << ans;

    return 0;
}
