#include <bits/stdc++.h>
using namespace std;

void insertionSort1(int n, vector<int> arr) {
    int i = n-2;
    int x = arr[n-1];
    bool done = false;
    while(i >= 0){
        if(arr[i] > arr[i+1]){
            swap(arr[i], arr[i+1]);
            for(int j = 0; j < n; j++){
                if(i == j){
                    cout << arr[j+1] << " ";
                }
                else cout << arr[j] << " ";
            }
            cout << endl;
            
        }
        else break;
        i--;
        
    }
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
    

}

int main(){
    int n;
    cin >> n;
    vector <int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    insertionSort1(n, v);
}