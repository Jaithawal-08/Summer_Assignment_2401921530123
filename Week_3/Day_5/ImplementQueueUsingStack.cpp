class MyQueue {
private:
    stack<int> s1, s2;

    void transfer() {
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }
    }

public:
    MyQueue() {}

    void push(int x) {
        s1.push(x);
    }
    
    int pop() {
        transfer();
        if (s2.empty()) return -1;
        int val = s2.top();
        s2.pop();
        return val;
    }
    
    int peek() {
        transfer();
        if (s2.empty()) return -1;
        return s2.top();
    }
    
    bool empty() {
        return s1.empty() && s2.empty();
    }
};
