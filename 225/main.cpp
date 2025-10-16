class MyStack {
public:
    vector<int> v;
    MyStack() {}

    void push(int x) { this->v.push_back(x); }

    int pop() {
        int val = this->v.back();
        this->v.pop_back();
        return val;
    }

    int top() { return this->v.back(); }

    bool empty() { return this->v.empty(); }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
