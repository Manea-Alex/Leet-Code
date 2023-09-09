import java.util.Stack;
// Using a stack to put inside the opening parenthesis, else we pop the first element of the stack and watch if current element is == to the popped element of the stack (LIFO)
class Solution {
    public boolean isValid(String s) {
        Stack <Character> stack = new Stack<>();

        for(int i = 0; i<s.length(); i++)
        {
            if(s.charAt(i) == '(' || s.charAt(i) == '[' || s.charAt(i) =='{')
                stack.push(s.charAt(i));
            else
            {
                 if (stack.empty()) return false;
                char character = stack.pop();

                if(s.charAt(i) == ')' && character != '(')
                    return false;
                if(s.charAt(i) == ']' && character != '[')
                    return false;
                if(s.charAt(i) == '}' && character != '{')
                    return false;
            }
             
        }
        return stack.empty();
    }
}

public class ValidParentheses{
    public static void main(String[] args){
        Solution n = new Solution();
        System.out.println(n.isValid("{["));
    }
}