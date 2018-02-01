class Solution
{
public:
    void push(int node) {
        stack1.push(node);
    }
    int pop() {
        if(stack2.size()<=0){
            while(stack1.size()>0){
                int a=stack1.top();
                stack1.pop();
                stack2.push(a);
            }
        }
        if(stack2.size()==0){
            throw new exception();
        }
        int b=stack2.top();
        stack2.pop();
        return b;
    }
private:
    stack<int> stack1;
    stack<int> stack2;
};
