#include <bits/stdc++.h>
using namespace std;

int numOfSubarrays(vector<int>& arr, int k, int threshold) {
    int N = arr.size();
    int sum = 0;
    if(N < k) return 0;
    for(int i = 0; i < k; i++) sum += arr[i];
    int i = 0, ret = 0;
    while(true){
        if(sum/k >= threshold) ret++;
        if(i+k < N){
            sum += (arr[i+k]-arr[i]);
            i++;
        }
        else break;
    }
    return ret;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    vector <int> arr(N);
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }
    int k, threshold;
    cin >> k >> threshold;
    cout << numOfSubarrays(arr, k, threshold) << endl;

}