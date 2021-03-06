#include <bits/stdc++.h>

using namespace std;

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

class Solution {
    public:
  		Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            } else {
                Node* cur;
                if(data <= root->data) {
                    cur = insert(root->left, data);
                    root->left = cur;
                } 
                else {
                    cur = insert(root->right, data);
                    root->right = cur;
                }

               return root;
           }
        }

/*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};

*/
  
    vector <Node*> getPath(Node *root, int val){
        vector <Node*> ret;
        while(root != NULL && root->data != val){
            ret.push_back(root);
            if(root->data > val) {
                root = root->left;
                
            }
            else {
                root = root->right;
            }
            
        }
         ret.push_back(root);
        return ret;
    }
    Node *lca(Node *root, int v1,int v2) {
        if(root == NULL) return root;
        vector <Node*> path1 = getPath(root, v1);
        vector <Node*> path2 = getPath(root, v2);
        
        int i = 0;
        while(i < min(path1.size(), path2.size()) && path1[i] == path2[i]){
            i++;
        }
        i--;
        return path1[i];
        
    }

}; //End of Solution

int main() {
  
    Solution myTree;
    Node* root = NULL;
    
    int t;
    int data;

    std::cin >> t;

    while(t-- > 0) {
        std::cin >> data;
        root = myTree.insert(root, data);
    }
  	
  	int v1, v2;
  	std::cin >> v1 >> v2;
  
    Node *ans = myTree.lca(root, v1, v2);
    
  	std::cout << ans->data;

    return 0;
}
