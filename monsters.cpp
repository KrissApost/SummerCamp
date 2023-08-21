#include <bits/stdc++.h>
using namespace std;

int main() {
    //ios_base::sync_with_stdio(0);
    //cin.tie(0);
    //cout.tie(0);
    int n;
    cin >> n;
    int a[n], ans[n] = {};
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int p = 0;
    stack<int> st;
    for(int i = 0; i < n; i++){
        if(a[i] == 0){
            st.push(i);
            p++;
            continue;
        }
        if(a[i] <= p){
            p++;
            continue;
        }
        int l = 0;
        while(a[i] > p + l){
            if(!st.size()){
                p = 0;
                break;
            }
            ans[st.top()] = p + l;
            l = st.top();
            st.pop();
            l -= st.top();
        }
        if(st.size()){
            p += l;
        }
    }
    for(int i = 0; i < n; i++){
        cout << ans[i] << " ";
    }

    return 0;
}
