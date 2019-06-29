#include <bits/stdc++.h>
using namespace std;

#define ll long long int

// Complete the workbook function below.
int workbook(int n, int k, vector<int> arr) {
    int ans = 0;
    int page = 1;
    for(int chap = 0; chap < n; chap++){
        int problem = 1;
        
        while(problem <= arr[chap]){
            if(problem == page){
                ans++;
                
            }
            if((problem % k) == 0 || problem == arr[chap]){
                
                page++;
            }
            problem++;
        }
        
    }

    return ans;


}

int main(){
	int n,k;
	cin>>n>>k;
	vector <int> arr;
	for(int i  = 0; i < n; i++){
		int num; cin>>num;
		arr.push_back(num);
	}
	int ans = workbook(n, k, arr);
	cout<<ans<<endl;
}
   

