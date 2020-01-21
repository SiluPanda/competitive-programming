#include <bits/stdc++.h>
using namespace std;

double area(int x1, int y1, int x2, int y2, int x3, int y3){
    double d1 = x1*(y2-y3);
    double d2 = x2*(y3-y1);
    double d3 = x3*(y1-y2);

    return abs(d1 + d2 + d3)/ (double) 2;
}

int main(){
        
    int n;
    cin >> n;
    double maxi = 0, maxind = 0, mini = 1000000, minind = 0;
    for(int i = 0; i < n; i++){
        int x1,y1,x2,y2,x3,y3;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        double currarea = (area(x1,y1,x2,y2,x3,y3));
        //cout << currarea << endl;
        if(currarea >= maxi){
            maxi = currarea;
            maxind = i+1;
        }
        if(currarea <= mini){
            mini = currarea;
            minind = i+1;
        }
    }
    cout << minind << "\n" << maxind << endl; 
    
}