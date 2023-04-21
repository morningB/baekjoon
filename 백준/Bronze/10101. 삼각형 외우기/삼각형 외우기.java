import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int angle1 = scanner.nextInt();
        int angle2 = scanner.nextInt();
        int angle3 = scanner.nextInt();
        
        if (angle1 + angle2 + angle3 != 180) { // 삼각형이 아닌 경우
            System.out.println("Error");
        } else if (angle1 == angle2 && angle2 == angle3) { // 정삼각형인 경우
            System.out.println("Equilateral");
        } else if (angle1 == angle2 || angle1 == angle3 || angle2 == angle3) { // 이등변삼각형인 경우
            System.out.println("Isosceles");
        } else { // 그 외의 경우
            System.out.println("Scalene");
        }
    }
}
