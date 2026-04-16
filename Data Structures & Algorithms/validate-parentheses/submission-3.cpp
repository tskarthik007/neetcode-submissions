class Solution {
public:
    bool isValid(string st) {
        stack<int> s;
        for(char i: st){
            if(i=='(' || i=='[' || i=='{' )
                s.push(i);
            else if(i == ']' && !s.empty() && s.top() == '[' )
                s.pop();
                
            else if(i==')' && !s.empty() && s.top() == '('  )
                s.pop();

            else if(i=='}' && !s.empty() && s.top()== '{' )
                s.pop();
            else
                return false;
            }

        if(s.size()==0)
            return true;
        else
            return false;
        
    }
};
