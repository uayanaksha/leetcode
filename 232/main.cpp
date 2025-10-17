class MyQueue {
public:
    deque<int> mem;
    MyQueue() {
        
    }
    
    void push(int x) {
        mem.push_back(x);
    }
    
    int pop() {
        int data = mem.front();
        mem.pop_front();
        return data;
    }
    
    int peek() {
        return mem.front();
    }
    
    bool empty() {
        return mem.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
