#include<ctype.h>

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> intermidiate_stack;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i]!="+" && tokens[i]!="-" && tokens[i]!="*" && tokens[i]!="/")
                intermidiate_stack.push(stoi(tokens[i])); 
            else{
                int b=intermidiate_stack.top();
                // cout<<"value of a -- "<<a<<'\n';
                intermidiate_stack.pop();
                int a=intermidiate_stack.top();
                // cout<<"value of b -- "<<b<<'\n';
                intermidiate_stack.pop();
                if(tokens[i]=="+")
                    intermidiate_stack.push((a+b));
                else if(tokens[i]=="-")
                    intermidiate_stack.push((a-b));
                else if(tokens[i]=="*")
                    intermidiate_stack.push((a*b));
                else if(tokens[i]=="/")
                    intermidiate_stack.push((a/b));
            }
        }
        cout<<"stack value "<<intermidiate_stack.top();
        return intermidiate_stack.top();
    }
};
