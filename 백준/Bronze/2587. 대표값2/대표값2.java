import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int a[]=new int[5];
        int sum=0;
        for(int i=0;i<5;i++){
            a[i]=s.nextInt();
            sum+=a[i];
        }
        int max=0;
        Arrays.sort(a);

        System.out.println((sum/5)+"\n"+a[2]);
    }
}


