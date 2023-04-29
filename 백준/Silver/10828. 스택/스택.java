import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Scanner;
import java.util.Stack;
import java.util.StringTokenizer;

public class Main {
    
    public static void main(String[] args) throws IOException{
    
        Stack<Integer> st=new Stack<>();
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
      
        int num=Integer.parseInt(br.readLine());
        for(int i=0;i<num;i++){
            StringTokenizer str = new StringTokenizer(br.readLine());
            String m=str.nextToken();
             switch(m){
                case "push":
                st.push(Integer.parseInt(str.nextToken()));
                break;
                case "pop":
                {
                    if(st.isEmpty())
                    System.out.println("-1");
                    else 
                    System.out.println(st.pop());
                }break;
                case "top":
                { if(st.isEmpty())
                System.out.println("-1");
                else
                System.out.println(st.peek());
                break;}
                case "size":
                System.out.println(st.size());
                break;
                case "empty":
                {
                    if(st.isEmpty())
                    System.out.println("1");
                    else
                    System.out.println("0");
                }

             }   
        }

        

    }
   
}