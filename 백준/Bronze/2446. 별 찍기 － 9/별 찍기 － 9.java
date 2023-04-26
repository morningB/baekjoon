import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n=s.nextInt();

        for(int i = n; i > 0 ; i--) {
            for(int k = 0; k < n-i; k++)
                System.out.print(" ");
            for(int j = 0; j < i*2-1; j++)
                System.out.print("*");
            System.out.println();
        }
        for(int i=1;i<n;i++){
            for(int k=i;k<n-1;k++)
                System.out.print(" ");
            for(int j=i*2+1;j>0;j--)
                System.out.print("*");
            System.out.println();
        }


    }
}


