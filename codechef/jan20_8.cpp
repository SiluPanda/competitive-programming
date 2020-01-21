#include <bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin >> tt;
    while(tt--){
        unordered_map <string, pair <int, int> > F;
        int n;
        cin >> n;
        for(int i = 0; i < n; i++){
            string s;
            cin >> s;
            int size = s.length();
            for(int pos = 0; pos < size; pos++){
                for(int curr_size = 1; curr_size <= size; curr_size++){
                    string temp = s.substr(pos, size);
                    F[temp].first = curr_size;
                    F[temp].second += 1;
                }
            }
            

        }
        int ret = 0;
        for(auto itr = F.begin(); itr != F.end(); itr++){
            int freq = itr->second.second;
            int len = itr->second.first;
            ret += ((freq*(freq-1))/2) * (len*len);
        }
        cout << ret << endl;
    }

}