#include<bits/stdc++.h>
#include<math.h>
using namespace std;
struct dot
{
long long x,y;
};
int manhd(dot a, dot b)
{
long long dist = abs((double)a.x-b.x)+abs((double)a.y-b.y);
return dist;
}
struct line
{
dot a,b;
dot c = {max(a.x-b.x/2, b.x-a.x/2), max(a.y-b.y/2, b.y-a.y/2)};
};
/**int fracti(n)
{

}
*/
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    line a,b;
    cin>>a.a.x>>a.a.y>>a.b.x>>a.b.y;
    cin>>b.a.x>>b.a.y>>b.b.x>>b.b.y;
    long long D[10],mini=1000000000;
    D[0]=manhd(a.a, b.a);
    D[1]=manhd(a.b, b.a);
    D[2]=manhd(a.a, b.b);
    D[3]=manhd(a.b, b.b);
    D[4]=manhd(a.a, b.c);
    D[5]=manhd(a.c, b.c);
    D[6]=manhd(a.b, b.c);
    D[7]=manhd(a.c, b.a);
    D[8]=manhd(a.c, b.c);
    D[9]=manhd(a.c, b.b);
    for(short i=0; i<10; i++) {
        if(mini>D[i]) mini=D[i];
    }
    cout<<mini<<'\n';
    return 0;
}
