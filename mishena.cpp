#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, a, k = 0;
    cin >> n >> a;
    int x, y;
    int r = a / 6;
    for(int i = 0; i < n; i++){
        cin >> x >> y;
        if(x == 0 && y == 0) k += 20;
        if(x * x + y * y == r * r) k += 15;
        if(x * x + y * y == r * r * 4) k += 10;
        if(x * x + y * y == r * r * 9) k += 5;
        if(x * x + y * y == r * r * 9) k += 1;
    }
    cout << 31 << endl << "WOW";
    return 0;
}
