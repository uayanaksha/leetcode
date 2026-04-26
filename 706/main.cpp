class MyHashMap {
    array<int, 100000> v;
public:
    MyHashMap() {
        v.fill(-1);
    }
    
    void put(int key, int value) {
        v[hash(key)] = value;
    }
    
    int hash(int key){
        return key % 100000;
    }

    int get(int key) {
        return v[hash(key)];
    }
    
    void remove(int key) {
        v[hash(key)] = -1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */
