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


