import java.io.IOException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws IOException {
        Scanner s=new Scanner(System.in);
        int a=s.nextInt();
        for(int i=0;i<a;i++) {
            for(int j=0;j<i;j++)
                System.out.print(" ");
            for(int j=a;j>i;j--) {
                System.out.print("*");
            }
            System.out.println();
        }
    }
}
