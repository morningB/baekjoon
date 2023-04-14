import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
       int n=s.nextInt(),m=s.nextInt();
       Integer k[]=new Integer[n];
       for(int i=0;i<n;i++){
           k[i]=s.nextInt();
       }
    Arrays.sort(k,Collections.reverseOrder());
        System.out.println(k[m-1]);


    }
}


