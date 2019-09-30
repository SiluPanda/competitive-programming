#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

int main(){
    fastio
    int tc;
    cin>>tc;
    while(tc--){
        double xc, yc, rad, xt1, yt1, xt2, yt2, xt3, yt3;
        cin>>xc>>yc>>rad>>xt1>>yt1>>xt2>>yt2>>xt3>>yt3;

        double side12 = sqrt(pow(xt1-xt2, 2) + pow(yt1-yt2, 2));
        double side23 = sqrt(pow(xt2-xt3, 2) + pow(yt2-yt3, 2));
        double side13 = sqrt(pow(xt3-xt1, 2) + pow(yt1-yt3, 2));

        double r1 = sqrt(pow(xc-xt1, 2) + pow(yc-yt1, 2));
        double r2 = sqrt(pow(xc-xt2, 2) + pow(yc-yt2, 2));
        double r3 = sqrt(pow(xc-xt3, 2) + pow(yc-yt3, 2));

        
        //alt12
        double s1 = (r1+r2+side12)/2;
        double alt12 = (2 * sqrt(s1 * (s1-r1) * (s1-r2) * (s1-side12)))/side12;

        //alt13
        double s2 = (r1+r3+side13)/2;
        double alt13 = (2 * sqrt(s2 * (s2-r1)*(s2-r3)*(s2-side13)))/side13;

        //alt23
        double s3 = (r2+r3+side23)/2;
        double alt23 = (2 * sqrt(s3 * (s3-r2) * (s3-r3) * (s3-side23) ))/side23;

        double max_dis = max(r1, max(r2, r3));
        double min_dis = min(r1, min(r2, r3));
        double max_alt = max(alt12, max(alt13, alt23));
        double min_alt = min(alt12, min(alt13, alt23));

        if(min_dis > rad){
            if(min_alt <= rad) cout << "YES";
            else cout << "NO";
        }
        else if(min_dis < rad){
            if(max_dis >= rad) cout << "YES";
            else cout << "NO";
        }
        else cout << "YES";
        cout << el;
        


    }
}