bool isValidParenthesis(string s)
{
    // Write your code here.
        stack<char> st;
        for(int i=0; i<s.length();i++){
            char ch = s[i];

            // if open bracket hai to stack mein push kar do

            if(ch =='(' || ch =='{' || ch =='['){
                st.push(ch);
            }
            else{
                //closing bracket hai to check karo top phir pop karo
                if(!st.empty()){
                    char top = st.top();
                    if((ch == ')' && top == '(') ||
                      ( ch == '}' && top == '{') ||
                      ( ch == ']' && top == '[')){
                          st.pop();
                      }
                    else{
                        return false;
                    }
                      
                }
            else{
                return false;
            }
          }
        }
        if(st.empty()){
            return true;
        }
        else{
            return false;
        }
        
    }