import java.util.*;

public class Main {

    public static void main(String[] args) {
    Scanner s = new Scanner(System.in);
    int count=s.nextInt();
    int coin=s.nextInt();

    int coinList[]=new int[count+1];

    int value = 0;

    for(int i=0;i<count; i++){
        coinList[i]=s.nextInt();
    }



    for(int i = count-1; i>=0;i--) {
        if (coin >= coinList[i]) {
            value += (coin/coinList[i]) ;
            coin = coin % coinList[i];

        
        }
    }

        System.out.println(value);
    }
}


