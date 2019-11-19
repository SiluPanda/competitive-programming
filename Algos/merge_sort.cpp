#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void merge(int v[], int low, int mid, int high){
    int dup[high-low+1];
    memset(dup, 0, sizeof(dup));
    int i = low, j = mid;
    int k = low;
    while(i < mid && j <= high){
        if(v[i] < v[j]){
            dup[k++] = v[i++];
        }
        else dup[k++] = v[j++];
    }
    while(i <= mid-1) dup[k++] = v[i++];
    while(j <= high) dup[k++] = v[j++];
    for(int i = 0; i < high-low+1; i++) v[i+low] = dup[i];
}

void mergesort(int v[], int low, int high){
    if(low < high){
        int mid = (low+high)/2;
        mergesort(v, low, mid);
        mergesort(v, mid+1, high);
        merge(v, low, mid, high);
    }
}

int main(){
    int n;
    cin >> n;
    int v[n];
    for(int i = 0; i < n; i++) cin >> v[i];
    mergesort(v, 0, n-1);
    for(int i = 0; i < n; i++) cout << v[i] << " ";
    cout << endl;
    
}