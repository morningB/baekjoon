import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int a=s.nextInt();
        int sum=1;
        
        for(int i=1;i<=a;i++){
            sum*=i;
        }
        System.out.println(sum);

    }
}


