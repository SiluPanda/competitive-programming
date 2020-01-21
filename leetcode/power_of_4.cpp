#include <bits/stdc++.h>
using namespace std;

bool isthere(vector <long long> v, int low, int high, int x){
    while(low <= high){
        long long mid = low + (high-low)/2;
        if(v[mid] == x){
            return true;
        }
        else if(v[mid] < x){
            low = mid+1;
        }
        else high = mid-1;
    }
    return false;
}
bool p4(int num){
    vector <long long> dp;
    long long c = 1;
    while(c <= INT_MAX){
        dp.push_back(c);
        c*=4;
    }
    return isthere(dp, 0, dp.size()-1, num);

    
}

int main(){
    int n;
    cin >> n;
    cout << p4(n) << endl;
}