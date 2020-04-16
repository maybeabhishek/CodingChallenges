class Solution {
public:
    bool checkValidString(string s) {
        int n = s.length();
        stack<char> st;
        int nStar = 0;
        for(auto i: s){
            if(!st.empty()){
                if(i==')'){
                    while(!st.empty() && st.top()=='*'){
                        st.pop();
                        nStar++;
                    }
                    // cout<<nStar<<"  nStar\n";
                    if(!st.empty() && st.top()=='(')
                        st.pop();
                    else if(nStar>0)
                        nStar--;
                    else
                        return false;
                    for(int j =0; j<nStar; j++)
                        st.push('*');
                    nStar = 0;
                }
                else
                    st.push(i);       
            }
            else{
                if(i==')')
                    return false;
                else
                    st.push(i);
            }
        }
        nStar = 0;
        while(!st.empty()){
            while(!st.empty() && st.top()=='*'){
                st.pop();
                nStar++;
            }
            if(st.empty())
                break;
            if(nStar==0 && st.top()=='('){
                return false;                
            }
            else{
                nStar--;
                st.pop();
            }
             for(int j =0; j<nStar; j++)
                st.push('*');
            nStar = 0;
            // cout << st.top()<<" ";
            
        }
            
        // if(nStar%2==0)
            return true;
       
    }
};