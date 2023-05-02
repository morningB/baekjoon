import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Scanner;


public class Main {
    static long count;
    static int sort[];
    public static void main(String[] args) throws IOException {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        int a[] = new int[n];
        sort=new int[n];
        for (int i = 0; i < n; i++)
            a[i] = s.nextInt();

        mergerSort(a,0,n-1);
        System.out.println(count);
    }
    public static void mergerSort(int a[],int left,int r){
        if(left<r){
            int mid=(left+r)/2;
            mergerSort(a,left,mid);
            mergerSort(a,mid+1,r);
            merge(a,left,mid,r);
        }
    }
    public static void merge(int a[],int left,int mid,int r){
        int i=left,j=mid+1,k=left;

        while(i<=mid && j<=r){
            if(a[i]<=a[j]){
                sort[k++]=a[i++];

            }
            else{
                sort[k++]=a[j++];
                count+=(long)(mid-i+1);
            }
        }
        if (i>mid)	/* 남아 있는 레코드의 일괄 복사 */
            for (int l = j; l <= r; l++)
                sort[k++] = a[l];
        else	/* 남아 있는 레코드의 일괄 복사 */
            for (int l = i; l <= mid; l++)
                sort[k++] = a[l];
        /* 배열 sorted[]의 리스트를 배열 list[]로 재복사 */
        for (int l = left; l <= r; l++)
            a[l] = sort[l];
    }
}
