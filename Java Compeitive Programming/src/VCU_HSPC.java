import java.util.*;
import java.lang.*;


public class VCU_HSPC {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int n = in.nextInt();

        for (int i = 0; i < n; i++) {
            int x = in.nextInt();

            System.out.println(x);
            solve(x);
        }





    }

    static void solve(int temp) {

        System.out.println(Math.round(Math.sqrt(temp)));


        int sum = 0;
        for (int i = 1; i <= Math.ceil(Math.sqrt(temp)); i++) {
            if (temp % i == 0) {
                System.out.print(i + " ");
                sum += i;
            }
        }

        if (sum == temp) {
            System.out.print("YES");
            System.out.println();
        } else {
            System.out.print("YES");
            System.out.println();
        }





    }
}
