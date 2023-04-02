import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        String str=s.nextLine();
        int cout=0;
        for(int i=0;i<str.length();i++){
            if(str.charAt(i)==' ')
                cout++;
        }
        if(str.charAt(0)==' ' && str.charAt(str.length()-1)==' ')
            cout--;
        if(str.charAt(0)!=' ' && str.charAt(str.length()-1)!=' ')
            cout++;
        System.out.println(cout);
    }
}

/*
import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        String str=s.nextLine();
        StringTokenizer st= new StringTokenizer(str," ");int cout=0;
       
        System.out.println(st.countTokens());
    }
}이러한 방법도 있음*/
