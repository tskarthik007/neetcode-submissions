class MinStack {
public:
    stack<int> _stack;
    stack<int> min_stack;
    MinStack() {
        
    }
    
    void push(int val) {
        _stack.push(val);
        if(!min_stack.empty()){
            if (min_stack.top() > val)
                min_stack.push(val);
            else
                min_stack.push(min_stack.top());
        }
        else{
            min_stack.push(val);
        }
    }
    
    void pop() {
        min_stack.pop();
        _stack.pop();
    }
    
    int top() {
        return _stack.top();
    }
    
    int getMin() {
        return (min_stack.top());
    }
};
