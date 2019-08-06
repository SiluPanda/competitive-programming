#include <bits/stdc++.h>
using namespace std;
#define ll long long int

struct book{
    int pages;
    string name;
    string author;
   

};

class dog{

}

int main(){
    int n;
    cin>>n;
    book a[n];
    for(int i = 0; i < n; i++){
        int p;
        string name, auth;
        cin>>p>>name>>auth;
        a[i].pages = p;
        a[i].name = name;
        a[i].author = auth;
    }
    cout << "Printing stuff..." << endl;
    for(int i = 0; i < n; i++){
        cout << a[i].name << a[i].author << a[i].pages << endl;
    }
}