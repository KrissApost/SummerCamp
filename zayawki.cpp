#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, q;
    cin >> n >> q;
    pair<int,int> arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i].first;
        arr[i].second = arr[i].first * arr[i].first;
    }
    int l, r, k;
    for(int i = 0; i < q; i++){
        cin >> l >> r >> k;
        l--;
        r--;
        int h, s = 0;
        bool br[n] = {};
        for(int j = 0; j < k; j++){
            cin >> h;
            h--;
            br[h] = 1;
            s += arr[h].second;
        }
        for(int j = l; j <= r; j++){
            if(!br[j]) s += arr[j].first;
        }
        cout << s << endl;
    }

    return 0;
}
