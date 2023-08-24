#include<bits/stdc++.h>
using namespace std;
pair<int,int> bezu(int a, int b){
    if(b == 0) return {1,0};
    pair<int,int> p = bezu(b,a%b);
    return {p.second, p.first-p.second*(a/b)};
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int a, b, c;
    cin >> a >> b >> c;
    if(c % __gcd(a,b) != 0){
        cout << "Impossible";
        return 0;
    }
    c /= __gcd(a,b);
    pair<int,int> k = bezu(a,b);
    cout << k.first * c << " " << k.second * c;

    return 0;
}
