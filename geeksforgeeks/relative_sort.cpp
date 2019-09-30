#include <bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int na, nb;
        cin>>na>>nb;
        int a[na];
        map <int, int > freq;
        for(int i = 0; i < na; i++){
            cin>>a[i];
            freq[a[i]]++;
        } 
        
        for(int i = 0; i < nb; i++){
            int num;
            cin>>num;
            if(freq.find(num) != freq.end()){
                for(int j = 0;j < freq[num];j++){
                    cout << num << " ";
                }
                freq[num] = 0;
            }
        }
        for(auto it = freq.begin(); it != freq.end(); it++){
            if(it->second != 0){
                for(int j = 0; j < it->second; j++){
                    cout << it->first << " ";
                }
            }
        }
        cout << endl;
        

    }
}