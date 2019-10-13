#include <bits/stdc++.h>
using namespace std;


//fiint a knapsack where items are non divisible

//matrix method; DP
int knapsack(int max_weight, int weights[], int values[], int n){
    int dp[n+1][max_weight+1];
    int i, j;
    for(i = 0; i <= n; i++){
        for(j = 0; j <= max_weight; j++){
            // if either there is no item or capacity of knapsack is 0
            if(i == 0 || j == 0){
                dp[i][j] = 0;
            }
            
            else if(weights[i-1] <= j){
                dp[i][j] = max(values[i-1]+dp[i-1][j-weights[i-1]], dp[i-1][j]);
            }
            else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    return dp[n][max_weight];
}

int knapsack_recu(int max_weight, int weights[], int values[], int n){
    if(max_weight == 0 || n == 0){
        return 0;
    }
    if(weights[n-1] > max_weight){
        return knapsack_recu(max_weight, weights, values, n-1);
    }
    else{
        return max(values[n-1]+knapsack_recu(max_weight-weights[n-1], weights, values, n-1), 
        knapsack_recu(max_weight, weights, values, n-1));
    }
}

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n, max_weight;
        cin>>n>>max_weight;
        int weights[n], values[n];
        for(int i = 0; i < n; i++) cin>>values[i];
        for(int i = 0; i < n; i++) cin>>weights[i];
        cout << knapsack_recu(max_weight, weights, values, n) << endl;
        
    }
}