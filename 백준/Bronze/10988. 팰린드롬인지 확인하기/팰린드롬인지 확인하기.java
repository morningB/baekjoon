import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		String str=sc.next();
		StringBuilder sb=new StringBuilder(str);
		String str2=sb.reverse().toString();
		if(str.equals(str2))
			System.out.println("1");
		else 
			System.out.println("0");
	
	}
}
