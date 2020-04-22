#include <bits/stdc++.h>
using namespace std;

int game(int n){
    int l = 1, h = n;
    int money = 0;
    while (l <= h) {
        int mid = l + (h-l)/2;
        if(mid == n){
            return money;
        }
        else if(mid < n){
            l = mid + 1;
            money += mid;
            cout << mid << endl;
        }
        else{
            h = mid-1;
            money += mid;
            cout << mid << endl;
        }
    }
    return -1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n; cin >> n;
    cout << game(n) << endl;
}