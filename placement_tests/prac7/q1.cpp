#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define db double
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

int fun(db x1, db x2, db y1, db y2){
    if(x2 == x1) return max(0, (int) abs(y2-y1)-1);
    if(y1 == y2) return max(0, (int) abs(x2-x1)-1);
    db slope = (y2-y1)/(x2-x1);
    
    int ans = (int) abs(slope * (x2-x1))-1;
    return max(0, ans);

    
}

int main(){
    fastio
    int tc;
    cin>>tc;
    while(tc--){
        double x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        cout << fun(x1, x2, y1, y2) << el;
        
        
        
    }
}