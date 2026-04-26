class MyHashSet {
public:
    vector<bool> v;
    MyHashSet() {
        this->v = vector<bool>(1e6 + 1, false);
    }
    
    void add(int key) {
        this->v[key] = true;
    }
    
    void remove(int key) {
        this->v[key] = false;
    }
    
    bool contains(int key) {
        return this->v[key];
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
