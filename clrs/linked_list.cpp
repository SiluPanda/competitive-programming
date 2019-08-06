#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node * next;
};

int main(){
    Node head;
    int n;
    cin>>n;
    int first;
    cin>>first;
    head->data = first;
    
    for(int i = 0; i < n-1; i++){
        int x;
        cin>>x;
        Node pp;
        pp->data = x;
        head->next = pp;
        


    }
}
