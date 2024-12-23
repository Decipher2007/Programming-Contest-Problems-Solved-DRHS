import java.util.*;

public class BigTotoro {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n, k;

        n = in.nextInt();
        k = in.nextInt();

        LinkedList<Integer> arr = new LinkedList<Integer>();


        for (int i = 0; i < n; i++) {
            int x;
            x = in.nextInt();

            arr.add(x % 4);
        }






    }
}
