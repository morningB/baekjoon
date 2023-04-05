import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n=s.nextInt();
        // high star
        for(int i=0;i<n;i++){
            for(int k=n-1;k>i;k--)
                System.out.print(" ");
            for(int j=i*2+1;j>0;j--)
                System.out.print("*");
            System.out.println();
        }
        // low the star
        for(int i = n-1; i >= 0 ; i--) {
            for(int j = 0; j < n-i; j++)
                System.out.print(" ");
            for(int j = 0; j < i*2-1; j++)
                System.out.print("*");
            System.out.println();
        }
    }
}


