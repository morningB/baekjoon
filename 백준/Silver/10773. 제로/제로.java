import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

import java.util.Stack;


public class Main {

    public static void main(String[] args) throws IOException{
        Stack<Integer> st=new Stack<>();
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int num=Integer.parseInt(br.readLine());
        int sum=0;
        for(int i=0;i<num;i++){
            int m=Integer.parseInt(br.readLine());
            if(m==0){
                st.pop();
            }
            else{
                st.push(m);
            }
        }
        for(int a:st)
            sum+=a;

        System.out.println(sum);


    }

}