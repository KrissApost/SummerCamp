#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string n, n1;
    int d;
    long long s;
    cin>>n>>d;

    for(int i = d; i >= 0; i--){
            n1.push_back(n[i]);
    }
    reverse(n1.begin(),n1.end());
    s = stoll(n1);
    int br = 0;
    while(s % 2 == 0){
       s /= 2;
       br++;
    }
    if(br >= d){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

    return 0;
}
