import java.util.*;
public class Main{
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
       int n=s.nextInt(),m=s.nextInt();
       if(n*100<m)
           System.out.println("No");
       else
           System.out.println("Yes");
    }
}


