#include<bits/stdc++.h>
using namespace std;
int main(){
    int xa, ya, xb, yb, xc, yc;
    cin >> xa >> ya >> xb >> yb >> xc >> yc;
    int x1 = xb - xa;
    int y1 = yb - ya;
    int x2 = xc - xa;
    int y2 = yc - ya;
    if(x1 * y2 == y1 * x2) cout<<"na edna prava sa";
    else cout<<"ne sa na edna prava";
    cout << endl << "WOW";
    return 0;
}
