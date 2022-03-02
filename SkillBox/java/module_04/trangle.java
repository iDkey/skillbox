import java.nio.file.FileSystemNotFoundException;
import java.util.Scanner;

public class RoadCamera {
    public static void main(String[] args) {

        int a;
        int b;
        int c;
        System.out.println("Enter coordinates trangle:");
        Scanner input = new Scanner(System.in);
        a = input.nextInt();
        b = input.nextInt();
        c = input.nextInt();

        System.out.print("Sum = " + (double) 2 / (a + b + c));
    }
}