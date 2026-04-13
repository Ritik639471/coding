// Last updated: 4/13/2026, 3:35:24 PM
class MyHashSet {
public:
    map<int,bool>m;
    MyHashSet() {
        
    }
    
    void add(int key) {
        m[key]=true;
    }
    
    void remove(int key) {
        m.erase(key);
    }
    
    bool contains(int key) {
        return m.find(key)!=m.end();
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */