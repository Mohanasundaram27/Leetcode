class Solution {
    public boolean isValid(String s) {
        Stack <Character> st=new Stack<Character>();
        for(char c:s.toCharArray())
        {
            if(c=='(')
            {
                st.push(')');
                
            }
            else if(c=='{')
            {
                st.push('}');
            }
            else if(c=='[')
            {
                st.push(']');
            }
            else if(st.isEmpty()||st.pop()!=c)
            {
                return false;
            }
        }
        
        return st.isEmpty();
        
    }
}





// public boolean isValid(String s) {
// 	Stack<Character> stack = new Stack<Character>();
// 	for (char c : s.toCharArray()) {
// 		if (c == '(')
// 			stack.push(')');
// 		else if (c == '{')
// 			stack.push('}');
// 		else if (c == '[')
// 			stack.push(']');
// 		else if (stack.isEmpty() || stack.pop() != c)
// 			return false;
// 	}
// 	return stack.isEmpty();
// }