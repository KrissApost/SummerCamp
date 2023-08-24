#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long N,K,i,maxi=0,mini=pow(10, 9),omx=0,omi=pow(10, 9),ct=0;
    cin>>N>>K;
    long long A[N];
    for(i=0; i<N; i++) {
        cin>>A[i+1];
        if(maxi<A[i]) maxi=A[i];
        if(mini>A[i]) mini=A[i];
        if(maxi-mini<=K) {
            ct++;
            omx=maxi;
            omi=mini;
        }
        else {
            maxi=omx;
            mini=omi;
        }
    }
    cout<<ct<<'\n';
    return 0;
}

