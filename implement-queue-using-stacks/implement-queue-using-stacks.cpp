class MyQueue {
   // stack s;
public:
    stack<int> s;
    MyQueue() {
    while(s.size())s.pop();
}

/** Push element x to the back of queue. */
void push(int x) {
    s.push(x);
}

/** Removes the element from in front of queue and returns that element. */
int pop() {
    if(s.empty()){
        return -1;
    }
    int top = s.top();
    s.pop();
    
    if(s.empty()){
        return top;
    }
    int ret= pop();
    s.push(top);
    return ret;
}

/** Get the front element. */
int peek() {
    if(s.empty()){
        return -1;
    }
    int top = s.top();
    s.pop();
    
    if(s.empty()){
        s.push(top);
        return top;
    }
    int ret= peek();
    s.push(top);
    return ret;

}

/** Returns whether the queue is empty. */
bool empty() {
    return s.empty();
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