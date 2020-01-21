#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

void countDistinct(int a[], int k, int n){
    unordered_map <int, int> F;
    for(int i = 0; i < k; i++){
        F[a[i]]++;
    }
    cout << F.size() << " ";
    int currsize = F.size();
    for(int i = k; i < n; i++){
        F[a[i]]++;
        if(F[a[i]] == 1) currsize++;
        F[a[i-k]]--;
        if(F[a[i-k]] == 0) currsize--;
        cout << currsize << " ";
        
    }
    
}

int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n, k;
        cin >> n >> k;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        countDistinct(a, k, n);
        cout << endl;
    }
}