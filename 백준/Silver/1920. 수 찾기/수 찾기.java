import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.Collections;
import java.util.Scanner;
import java.util.Stack;


public class Main {

    public static void main(String[] args) throws NegativeArraySizeException{
        Scanner s=new Scanner(System.in);
        int n= s.nextInt();
        int []a=new int[n];
      for(int i=0;i<n;i++)
            a[i]=s.nextInt();

        Arrays.sort(a);

        int m=s.nextInt();
        int []b=new int[m];

        for(int i=0;i<m;i++)
            b[i] = s.nextInt();



        for(int i=0;i<m;i++){
            int mid,low=0,high=n-1;
            boolean f=false;
            while(low<=high){
                mid=(low+high)/2;

                if(a[mid]==b[i]){
                    f=true;
                    break;
                } else if(a[mid]<b[i])
                    low=mid+1;
                else
                    high=mid-1;
            }

            if(f)
                System.out.println("1");
            else
                System.out.println("0");
        }
    }

}