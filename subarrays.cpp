#include <bits/stdc++.h>
#define endl '\n';
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long n, k;
    cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        a[i] = a[i] % k;
    }
    int ans = 0;
    for(int i = 0; i < n - 1; i++){
        long long s = 1;
        for(int j = i; j < n; j++){
            s *= a[j];
            if(s % k == 0){
                ans += n - j;
                break;
            }
        }
    }
    cout << ans;
    return 0;
}
