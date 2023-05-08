import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.NoSuchElementException;
import java.util.Scanner;
import java.util.Stack;


public class Main {
static int count=0;
    public static void main(String[] args) throws IOException, NoSuchElementException {
    BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
    int n=Integer.parseInt(br.readLine());
        for (int i = 0; i < n; i++) {
            String s = br.readLine();
            Stack<Character> stack = new Stack<>();
            boolean isVPS = true;  // 괄호열이 올바른 괄호열인지 여부를 저장하는 변수

            for (int j = 0; j < s.length(); j++) {
                char c = s.charAt(j);

                if (c == '(') {  // 여는 괄호일 때
                    stack.push(c);
                } else {  // 닫는 괄호일 때
                    if (stack.empty()) {  // 스택이 비어있으면 올바른 괄호열이 아님
                        isVPS = false;
                        break;
                    } else {
                        stack.pop();  // 스택에서 짝이 맞는 여는 괄호를 뺌
                    }
                }
            }

            if (!stack.empty()) {  // 스택이 비어있지 않으면 올바른 괄호열이 아님
                isVPS = false;
            }

            if (isVPS) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }


    }

}
