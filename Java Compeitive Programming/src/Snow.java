import java.sql.Array;
import java.util.*;

public class Snow {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int x, y;

        x = in.nextInt();
        y = in.nextInt();


        char[][] matrix = new char[x][y];

        int[] countable = new int[y];

        Arrays.fill(countable, 0);

        int count = 0;

        for (int i = 0; i < x; i++) {
            String temp;

            temp = in.next();

            for (int j = 0; j < temp.length(); j++) {
                if (temp.charAt(j) == 'S') {
                    countable[j] += 1;
                }
            }
        }


        for (int i = 0; i < y; i++) {
            for (int j = 0; j < x; j++) {

                if (j >= x - countable[i]) {
                    matrix[j][i] = 'S';
                } else {
                    matrix[j][i] = '.';
                }



            }
        }

        for (int i = 0; i < x; i++) {
            for (int j = 0; j < y; j++) {

                if (j == y - 1) {
                    System.out.print(matrix[i][j]);
                } else {
                    System.out.print(matrix[i][j]);
                }



            }

            System.out.println();
        }





    }

}
