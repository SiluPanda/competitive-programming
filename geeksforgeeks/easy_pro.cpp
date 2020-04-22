#include <bits/stdc++.h>
using namespace std;

bool CheckSub(int arr[], int n)
{
    vector <int> right_max(n);
    right_max[n-1] = arr[n-1];
    for(int i = n-2; i >= 0; i--){
        right_max[i] = max(right_max[i+1], arr[i]);
    }
    for(int i = 0; i < n-2; i++){
        for(int j = i+1; j < n-1; j++){
            if(arr[j] > arr[i] && right_max[j+1] > arr[j]){
                return true;
            }
        }
    }
    return false;
}

int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n; 
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++) cin >> arr[i];
        cout << CheckSub(arr, n) << endl;
    }
}