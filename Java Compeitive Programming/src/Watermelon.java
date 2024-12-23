import java.util.*;
import java.lang.*;

public class Watermelon {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int w = in.nextInt();
        if (w % 2 == 0) {
            if (w <= 2) {
                System.out.println("NO");
            } else {
                System.out.println("YES");
            }
        } else {
            System.out.println("NO");
        }
    }
}
