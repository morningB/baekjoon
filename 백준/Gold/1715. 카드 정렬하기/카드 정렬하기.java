import java.util.*;

// Press Shift twice to open the Search Everywhere dialog and type `show whitespaces`,
// then press Enter. You can now see whitespace characters in your code.
public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        int n=s.nextInt();

        PriorityQueue<Integer> list = new PriorityQueue<>();
        for(int i=0;i<n;i++){
            int m=s.nextInt();
            list.add(m);
        }



        int result=0;

        while(list.size()!= 1){
            int d1= list.remove();
            int d2=list.remove();

            result += d1+d2;
            list.add(d1+d2);
            
        }


        System.out.println(result);
    }
}
