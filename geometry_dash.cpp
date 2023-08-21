#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int xd, yd, xa, ya, xb, yb;
    cin >> xd >> yd >> xa >> ya >> xb >> yb;
    int d = xd * (ya-yb) + yd * (xb-xa)+(xa*yb-xb*ya);
    if(d == 0) cout << "na pravata e";
    if(d < 0) cout << "pod pravata e";
    if(d > 0) cout << "nad pravata e";
    cout << endl << "WOW";
    return 0;
}
