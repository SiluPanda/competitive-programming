#include <bits/stdc++.h>
using namespace std;

class ProductOfNumbers{
    public:
    vector <int> arr, prefix;
    int last_seen = -1;
    ProductOfNumbers(){
        arr.clear();
        prefix.clear();
    }
    void add(int num){
        if(num == 0){
            last_seen = arr.size();
        }
        arr.push_back(num);
        if(prefix.empty()){
            prefix.push_back(num);
        }
        else{
            if(prefix.back() == 0){
                prefix.push_back(num);
            }
            else{
                prefix.push_back(prefix.back()*num);
            }
        }
    }
    int getProduct(int k){
        int N = prefix.size();
        if(k == N){
            if(last_seen >= N-k) return 0;
            else return prefix[N-1];
        }
        else{
            if(last_seen >= N-k){
                return 0;
            }
            else{
                if(arr[N-k-1] == 0){
                    return prefix[N-1];
                }
                else{
                    return prefix[N-1]/prefix[N-1-k];
                }
            }
        }
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ProductOfNumbers pro;
    int n;
    cin >> n;
    while(n--){
        char c;
        cin >> c;
        if(c == 'a'){
            int num;
            cin >> num;
            pro.add(num);
        }
        else{
            int k;
            cin >> k;
            cout << pro.getProduct(k) << endl;
        }
    }


}