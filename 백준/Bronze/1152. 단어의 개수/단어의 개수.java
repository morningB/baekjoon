import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        String str=s.nextLine();
        StringTokenizer st= new StringTokenizer(str," ");int cout=0;
       
        System.out.println(st.countTokens());
    }
}


