class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded="";
        for(auto s:strs){
            int len=s.length();
            encoded +=to_string(len)+"#"+s;
        }
        return encoded;
    }

    vector<string> decode(string s) {
        int i=0;
        vector<string> decoded;
        while(i<s.size()){
            int p=i;
            while(s[p]!='#'){
                p++;
            }
            
            int len=stoi(s.substr(i,p-i));
            string temp=s.substr(p+1,len);
            decoded.push_back(temp);
            i=len+1+p;
                
            
            
        }
        return decoded;

    }
};
