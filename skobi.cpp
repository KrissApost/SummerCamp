#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
bool isTrue(string s, int r, int l){
    int k = 0;
    for(int i = 0; i <= s.size(); i++){
        if(i == r){
            k++;
        }
        if(i == l){
            k--;
        }
        if(i == s.size()){
            continue;
        }
        if(s[i] == '('){
            k++;
        }else{
            k--;
        }
        if(k < 0){
            return false;
        }
    }
    if(k != 0) return false;
    return true;

}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    long long k = 0;
    for(int i = 0; i < s.size() + 1; i++){
        for(int j = 0; j < s.size() + 1; j++){
            if(isTrue(s,i,j)){
                k++;
            }
        }
    }
    cout << k;
    return 0;
}
