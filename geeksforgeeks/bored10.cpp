#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

bool isthere(int fibo[], int low, int high, int x){
    while(low <= high){
        int mid = (low+high)/2;
        if(fibo[mid] == x){
            return 1;
        }
        else if(fibo[mid] > x){
            high = mid-1;
        }
        else low = mid+1;
    }
    return 0;
    
}

int main(){
    int fibo[30];
    fibo[0] = 0;
    fibo[1] = 1;
    for(int i = 2; i <= 29; i++) fibo[i] = fibo[i-1]+fibo[i-2];
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        int ans = 0;
        for(int i = 0; i < n; i++){
            int num;
            cin >> num;
            if(isthere(fibo,0, 29 , num)) cout << num << " ";
        }
        cout << el;

    }
}