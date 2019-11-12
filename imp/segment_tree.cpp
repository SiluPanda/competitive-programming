#include <bits/stdc++.h>
using namespace std;

struct segtree{
    int data;
    int low, high;
    segtree *left, *right;
    segtree(int low, int high){
        this->low = low;
        this->high = high;
        this->data = INT_MIN;
        this->left = NULL;
        this->right = NULL;
    }
}
int getmid(int low, int high){
    return (low+high)/2;
}
void constructTree(segtree *top, int arr[], int low, int high){
    while(low <= high){
        top->left = new segtree(low, getmid(low, high));
        top->right = new segtree(getmid(low, high)+1, high);
        

    }
}