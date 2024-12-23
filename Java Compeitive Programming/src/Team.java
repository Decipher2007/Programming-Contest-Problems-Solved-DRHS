import java.util.*;
import java.lang.*;
import java.io.*;

public class Team {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int t = in.nextInt();

        in.nextLine();

        int count = 0;


        while (t != 0) {

            String line = in.nextLine();
            List<String> temp = Arrays.asList(line.split(" "));

            if (Collections.frequency(temp, "1") >= 2) {
                count++;
            }

            t--;
        }

        System.out.println(count);


    }
}
