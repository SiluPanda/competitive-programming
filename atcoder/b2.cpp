#include <bits/stdc++.h>
using namespace std;

void permute(string s, int low, int high, vector <string>& arr){
    if(low == high){
        arr.push_back(s);
    }
    for(int i = low; i <= high; i++){
        swap(s[i], s[low]);
        permute(s, low+1, high, arr);
        swap(s[i], s[low]);
    }
}

int find(vector <string> arr, int low, int high, string target){
    while(low <= high){
        int mid = (low+high)/2;
        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid] > target){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return -1;
    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    string s = "", x = "", y = "";
    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        s += ((i+1) + '0');
        x += (num + '0'); 
    }
    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        y += (num + '0');
    }
    vector <string> arr;
    permute(s, 0, n-1, arr);
    sort(arr.begin(), arr.end());
    int pos1 = find(arr, 0, arr.size()-1, x);
    int pos2 = find(arr, 0, arr.size()-1, y);
    cout << abs(pos1-pos2) << endl;
}