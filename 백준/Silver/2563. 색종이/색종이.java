import java.util.*;
public class Main{
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
       int n=s.nextInt();
       int a[][]=new int[101][101];
       int sum=0;
       for(int i=0;i<n;i++){
           int x=s.nextInt();
           int y=s.nextInt();

           for(int j=x;j<x+10;j++){
               for(int k=y;k<y+10;k++){
                   if(a[j][k]==0){
                       a[j][k]=1;
                       sum++;
                   }
               }
           }
       }
        System.out.println(sum);
    }
}


