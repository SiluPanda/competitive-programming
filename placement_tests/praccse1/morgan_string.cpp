#include <bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        string a, b;
        cin>>a>>b;
        long heada = 0, headb = 0;
        long lena = a.length(), lenb = b.length();
        string ans = "";
        while(heada < lena || headb < lenb){
            if(heada > lena-1){
                ans += b[headb];
                headb++;
            }
            else if(headb > lenb-1){
                ans += a[heada];
                heada++;
            }
            else if(a[heada] > b[headb]){
                ans += b[headb];
                headb++;
            }
            else if(a[heada] < b[headb]){
                ans += a[heada];
                heada++;
            }
            else{
                if((headb != lena-1) && a[heada] > b[headb]){
                    ans += b[headb];
                    headb++;
                }
                else{
                    
                }
            }
        }
        cout << ans << endl;
    }
}