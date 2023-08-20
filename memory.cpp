#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int *pa;
    int n;
    cin >> n;
    pa = new int[n];
    for(int i = 0; i < n; i++){
        *(pa+i) = i;
    }
    for(int i = 0; i < n; i++){
        cout << *(pa+i) << endl;
    }
    delete[]pa;
    return 0;
}
