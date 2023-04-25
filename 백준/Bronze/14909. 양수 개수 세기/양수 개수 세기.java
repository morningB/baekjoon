import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a;
        int count=0;
        while(sc.hasNextInt()){
            a=sc.nextInt();
            if(a>0)
                count++;

        }
        System.out.println(count);
    }
}