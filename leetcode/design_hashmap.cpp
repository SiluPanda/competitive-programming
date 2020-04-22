#include <bits/stdc++.h>
using namespace std;

class MyHashMap {
public:
    /** Initialize your data structure here. */
    vector <int> F{vector <int>(1000001, -1)};
    MyHashMap() {
        
    }
    
    /** value will always be non-negative. */
    void put(int key, int value) {
        this->F[key] = value;
    }
    
    /** Returns the value to which the specified key is mapped, or -1 if this map contains no mapping for the key */
    int get(int key) {
        return this->F[key];
    }
    
    /** Removes the mapping of the specified value key if this map contains a mapping for the key */
    void remove(int key) {
        this->F[key] = -1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */

int main(){
    MyHashMap* hashMap = new MyHashMap();
    hashMap->put(1, 1);          
    hashMap->put(2, 2);         
    cout << hashMap->get(1) << endl;        // returns 1
    cout << hashMap->get(3) << endl;         // returns -1 (not found)
    hashMap->put(2, 1);          // update the existing value
    cout << hashMap->get(2) << endl;         // returns 1 
    hashMap->remove(2);          // remove the mapping for 2
    cout << hashMap->get(2) << endl;
}