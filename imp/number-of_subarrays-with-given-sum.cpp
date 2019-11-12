#include <bits/stdc++.h>
using namespace std;

int number_of_subarr(int a[], int n, int sum){
    int currsum = 0;
    int ret = 0;
    unordered_map <int, int> M;
    for(int i = 0; i < n; i++){
        currsum += a[i];
        if(currsum == sum){
            ret++;
        }
        //when the sum exceeds, exclude the subarrays with exceeded sum
        // add the new subarrays
        if(M.find(currsum-sum) != M.end())
            ret += M[currsum-sum];
        M[currsum]++;
    }
    return ret;
}

int main(){
    int n, sum;
    cin >> n >> sum;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cout << number_of_subarr(a, n, sum) << endl;

}