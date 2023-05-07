import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(); // 입력받은 수
        int cnt = 0; // 사이클의 길이
        int newNum = n; // 새로운 수

        do {
            int sum = (newNum / 10) + (newNum % 10); // 각 자리 수의 합
            newNum = (newNum % 10) * 10 + (sum % 10); // 뒤 자리 수를 옮긴 수
            cnt++; // 사이클의 길이 증가
        } while (n != newNum); // 입력받은 수와 같아질 때까지 반복

        System.out.println(cnt); // 사이클의 길이 출력
    }
}
