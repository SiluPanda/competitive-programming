#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

double sum(ll n){
    return (n+1)/(double) 2;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n, k;
    cin >> n >> k;
    vector <ll> arr(n);
    for(ll i = 0; i < n; i++){
        cin >> arr[i];
    }
    ll start = 0, end = start+k-1;
    ll maxsum = INT_MIN, curr_sum = 0, maxstart = 0;
    for(ll i = 0; i < k; i++){
        curr_sum += arr[i];
    }
    while(true){
        if(curr_sum > maxsum){
            maxsum = curr_sum;
            maxstart = start;
        }
        if(end == n-1) break;
        curr_sum -= arr[start];
        curr_sum += arr[end+1];
        end++;
        start++;
    }
    double ret = 0;
    for(ll i = maxstart; i < maxstart+k; i++){
        ret += sum(arr[i]);
    }
    cout << fixed << setprecision(6) << ret << endl;

}