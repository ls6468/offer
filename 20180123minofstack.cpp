class Solution {
public:
    stack<int> a,b;
    void push(int value) {
        a.push(value);
        if(b.size()==0||value<b.top())
            b.push(value);
        else
            b.push(b.top());
    }
    void pop() {
        if(a.size()>0&&b.size()>0)
        	a.pop();
        	b.pop();
    }
    int top() {
        if(a.size()>0)
        	return a.top();
    }
    int min() {
        if(b.size()>0)
        	return b.top();
    }
};
