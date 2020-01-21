#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

bool solve(string a, string b){
	int lena = a.length(), lenb = b.length();
	if(lena != lenb) return false;
	unordered_map <char, int> A, B;
	for(int i = 0; i < lena; i++){
		A[a[i]]++;
	}
	for(int i = 0; i < lenb; i++){
		B[b[i]]++;
	}
	for(auto it = A.begin(); it != A.end(); it++){
		if(B[it->first] != it->second) return false;
	}
	return true;

	
}
int main(){
	int tt;
	cin >> tt;
	while(tt--){
		string a, b;
		cin >> a >> b;
		bool f = 0;
		int size = a.length();
		for(int pos = 0; pos < b.length(); pos++){
			if(solve(a, b.substr(pos, size))){
				f = 1;
				break;
			}
		}
		if(f) cout << "YES";
		else cout << "NO";
		cout << el;
	}
}