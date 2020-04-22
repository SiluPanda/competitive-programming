#include <bits/stdc++.h>
using namespace std;

int colourful(int A){
    vector <int> arr;
    while(A > 0){
        arr.push_back(A%10);
        A /= 10;
    }
    set <long long> F;
    for(int i = 0; i < arr.size(); i++){
        long long prod = 1;
        for(int j = i; j < arr.size(); j++){
            prod *= arr[j];
            if(F.find(prod) != F.end()){
                return 0;
            }
            F.insert(prod);
        }
        
    
    }
    return 1;

}

int main(){
    int A;
    cin >> A;
    cout << colourful(A) << endl;
}