import java.util.*;
import java.lang.*;
import java.io.*;

public class WayTooLongWords {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int t = in.nextInt();
        StringBuilder temp = new StringBuilder();

        in.nextLine();

        while (t != 0) {
            String line = in.nextLine();


            if (line.length() > 10) {
                temp.append(line.charAt(0));
                temp.append(line.length() - 2);
                temp.append(line.charAt(line.length() - 1));
                System.out.println(String.valueOf(temp));
                temp.setLength(0);
            } else {
                System.out.println(line);
            }

            t--;
        }
    }
}
