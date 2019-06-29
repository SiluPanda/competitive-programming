#include <bits/stdc++.h>

using namespace std;


// Complete the almostSorted function below.


bool is_sorted(vector <int> a){
	bool b = true;
	long long int size = a.size();
	for(long long int i = 1; i < size; i++){
		if(a[i] < a[i-1]){
			b = false;
			break;
		}
	}
	return b;

}


void almost_sorted_v2(vector <int> arr){
	long long int size = arr.size();
	vector <int> arr_dup = arr;
	sort(arr_dup.begin(), arr_dup.end());
	vector <long long int> ind;
	for(long long int i = 0; i < size; i++){
		if(arr[i] != arr_dup[i]){
			ind.push_back(i);
		}
	}
	long long int len = ind.size();
	if(len == 0){
		cout<<"yes"<<endl;
	} 
	else if(len == 2){
		cout<<"yes"<<endl;
		cout<<"swap "<<ind.front()+1<<" "<<ind.back()+1<<endl;
	}
	else{
		reverse(arr.begin()+ind.front(), arr.begin()+ind.back()+1);
		if(is_sorted(arr)){
			cout<<"yes"<<endl;
			cout<<"reverse "<<ind.front()+1<<" "<<ind.back()+1<<endl;
		}
		else{
			cout<<"no"<<endl;
		}

	}
}

int main(){
	int n; cin>>n;
	vector <int> v;
	for(int i = 0; i < n; i++){
		int num; cin>>num;
		v.push_back(num);
	}
	almost_sorted_v2(v);
}