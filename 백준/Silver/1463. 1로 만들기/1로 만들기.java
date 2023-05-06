import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Scanner;
import java.util.Stack;


public class Main {
static int count=0;
    public static void main(String[] args) throws IOException {
    BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
    int n=Integer.parseInt(br.readLine());
        int[] a = new int[n+1];

        for (int i=2; i<=n; i++) {
            a[i] = a[i-1] + 1; // 처음 수
            if (i%2 == 0 && a[i] > a[i/2] + 1) { // 2로 나누기 가능
                a[i] = a[i/2] + 1; // 횟수
            }
            if (i%3 == 0 && a[i] > a[i/3] + 1) { // 3으로 나누기 가능
                a[i] = a[i/3] + 1; // 횟수
            }

        }
        System.out.println(a[n]);
    }

}