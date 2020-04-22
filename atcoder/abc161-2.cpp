#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector <int> arr(n);
    int sum = 0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        sum += arr[i];
    }
    sort(arr.begin(), arr.end(), greater <int> ());
    if(arr[m-1] < (1/(double)(4*m)) * sum){
        cout << "No";
    }
    else{
        cout << "Yes";
    }
    cout << "\n";
}