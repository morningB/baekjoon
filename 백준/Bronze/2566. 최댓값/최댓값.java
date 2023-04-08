import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        int[][] a=new int[10][10];
        int n=0,m=0;
        for(int i=0;i<9;i++)
            for(int j=0;j<9;j++)
                a[i][j]=s.nextInt();

        int max=a[0][0];
        for(int i=0;i<9;i++)
            for(int j=0;j<9;j++) {
                if(max<a[i][j]){
                    max=a[i][j];
                n=i;
                m=j;
                }

            }
        System.out.println(max);
        System.out.println((n+1)+" "+(m+1));


    }
}


