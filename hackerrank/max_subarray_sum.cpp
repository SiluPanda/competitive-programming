#include <bits/stdc++.h>

using namespace std;


// Complete the maxSubarray function below.
bool all_positive(vector <int> arr){
    int s = arr.size();
    for(int i = 0; i < s; i++){
        if(arr[i] < 0){
            return false;
        }
    }

    return true;
}

int maxSubArraySum(vector <int> a) {
  int max_so_far = INT_MIN, max_ending_here = 0;
  int size = a.size();
  for (int i = 0; i < size; i++) {
    max_ending_here = max_ending_here + a[i];
    if (max_so_far < max_ending_here)
      max_so_far = max_ending_here;

    if (max_ending_here < 0)
      max_ending_here = 0;
  }
  return max_so_far;
}

int max_of_vector(vector <int> a){
    int max = INT_MIN;
    int size = a.size();
    for(int i = 0; i < size; i++){
        if(max < a[i]){
            max = a[i];
        }
    }
    return max;
}

vector<int> maxSubarray(vector<int> arr) {
    vector <int> result;
    int s = arr.size();
    int sum1 = 0;
    for(int i = 0; i < s; i++){
        if(!(arr[i] < 0)){
            sum1 += arr[i];
        }
    }
    result.push_back(sum1);
    if(all_positive(arr)){
        result.push_back(sum1);
    }
    else{
        result.push_back(maxSubArraySum(arr));
    }

    reverse(result.begin(), result.end());
    if(result[1] == 0){
        result[1] = max_of_vector(arr);
    }
    return result;
    


}

int main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector <int> arr;
        for(int i = 0; i < n; i++){
            int num; cin>>num;
            arr.push_back(num);
        }

        vector <int> result;
        result = maxSubarray(arr);
        for(int i = 0; i < result.size(); i++){
            cout<<result[i]<<" ";
        }
        cout<<endl;
    }
}
