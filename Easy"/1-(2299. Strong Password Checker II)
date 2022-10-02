//Strong Password

class Solution {
public:
    string validIPAddress(string queryIP)
    {
        if(count(queryIP.begin(),queryIP.end(),'.')==3){
            if(queryIP[queryIP.size()-1]=='.') return "Neither";
            stringstream ss(queryIP);
            string token;
            while(getline(ss,token,'.')){
                if(token.size()==0 || token.size()>3) return "Neither";
                if(token[0]=='0' && token.size() !=1) return "Neither";
                for(char c:token) if(!isdigit(c)) return "Neither";
                if(stoi(token)>255) return "Neither";
            }
            return "IPv4";
        }
        
        else if(count(queryIP.begin(),queryIP.end(),':')==7){
            if(queryIP[queryIP.size()-1]==':') return "Neither";
            stringstream ss(queryIP);
            string token;
            while(getline(ss,token,':')){
                if(token.size()==0 || token.size()>4) return "Neither";
                for(char c:token) if(!isxdigit(c)) return "Neither";
                
            }
            return "IPv6";
        }
        return "Neither";
    }
};
