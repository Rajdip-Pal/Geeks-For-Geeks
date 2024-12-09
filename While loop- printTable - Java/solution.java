import java.util.Scanner;

public class solution {
    public static void main(String args[]) {
        Scanner scanner = new Scanner(System.in);
        int i = 10, num = scanner.nextInt();

        while (i > 0)
            System.out.print(num * i-- + " ");

        System.out.println();

        scanner.close();
    }
}
