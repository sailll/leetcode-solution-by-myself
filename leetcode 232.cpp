class MyQueue {
public:
    /** Initialize your data structure here. */
    stack<int> s;
    stack<int> s_bp;
    MyQueue() {
        
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        s.push(x);
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        int n = s.size();
        for(int i=0;i<n;++i){
            s_bp.push(s.top());
            s.pop();
        }
        int ans = s_bp.top();
        s_bp.pop();
        for(int i=0;i<n-1;++i){
            s.push(s_bp.top());
            s_bp.pop();
        }
        return ans;
    }
    
    /** Get the front element. */
    int peek() {
        int n = s.size();
        for(int i=0;i<n;++i){
            s_bp.push(s.top());
            s.pop();
        }
        int ans = s_bp.top();
        for(int i=0;i<n;++i){
            s.push(s_bp.top());
            s_bp.pop();
        }
        return ans;
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return s.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue obj = new MyQueue();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.peek();
 * bool param_4 = obj.empty();
 */