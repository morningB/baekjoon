import java.util.*;

public class Main {
    public static class Baekjoon implements Comparable{
        int a;
        int b;
        public Baekjoon(int a,int b){
            this.a= a;
            this.b=b;
        }

        @Override
        public int compareTo(Object o) {
            return 0;
        }
    }

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int a= s.nextInt();
        int count=0;
        for(int i=0;i<a;i++){
            int b=s.nextInt();
            int [] list = new int[b+1];
            count = 1;

            for(int j=0;j<b;j++){
                int m=s.nextInt();
                int n=s.nextInt();
                list[m]=n;
            }


            int min=list[1];

            for(int j=2;j<=b;j++){
                if(list[j]<min ) {
                    count++;
                    min=list[j];
                }

            }

            System.out.println(count);
        }


    }
}


