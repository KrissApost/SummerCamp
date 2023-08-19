#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    vector<int> a[n];
    vector<int> visited(n,-1);
    int b, c;
    for(int i = 0; i < m; i++){
        cin >> b >> c;
        a[b-1].push_back(c-1);
        a[c-1].push_back(b-1);
    }
    int k;
    cin >> k;
    queue<int> q;
    for(int i = 0; i < k; i++){
        cin >> b;
        q.push(b-1);
        visited[b-1] = 0;
    }
    while(!q.empty()){
        int h = q.front();
        q.pop();
        for(int i = 0; i < a[h].size(); i++){
            if(visited[a[h][i]]==-1){
                visited[a[h][i]]=visited[h]+1;
                q.push(a[h][i]);
            }
        }
    }
    for(int i=0;i < n; i++){
        cout<< visited[i] <<" ";
    }

    return 0;
}
