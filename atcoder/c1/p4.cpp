#include <bits/stdc++.h>
using namespace std;

bool is_triangle(int a, int b, int c){
    return (a < b+c) && (b < c+a) && (c < a+b);
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a+n);
    int ans = 0;
    for(int i = 0; i <= n-3; i++){
        for(int j = i+1; j <= n-2; j++){
            for(int k = j+1; k < n; k++){
                if(is_triangle(a[i], a[j], a[k])) ans++;
            }
        }
    }
    cout << ans << endl;
}