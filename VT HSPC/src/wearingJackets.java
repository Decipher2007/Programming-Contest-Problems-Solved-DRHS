import java.util.*;
import java.lang.*;
import java.io.*;

public class wearingJackets {

    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        int jackets = in.nextInt();
        int days = in.nextInt();

        int[] storageOfJackets = new int[jackets];

        for (int i = 0; i < jackets; i++) {
            int tempIncrease = in.nextInt();
            storageOfJackets[i] = tempIncrease;
        }

        Arrays.sort(storageOfJackets);

        for (int i = 0; i < days; i++) {

            int low = in.nextInt();
            int high = in.nextInt();


            int ans = solve(low, high, storageOfJackets);

            System.out.println(ans);



        }



    }

    static int solve(int low, int high, int[] storageOfJackets) {

        TreeSet<Integer> listOfDiffs = new TreeSet<Integer>();

        for (int i = low; i <= high; i++) {

            int lowest = storageOfJackets[0];
            int highest = storageOfJackets[storageOfJackets.length-1];

            int result = searchForClosestDiff(storageOfJackets, i);
//            System.out.println(result);

            listOfDiffs.add(result);





        }

        return listOfDiffs.last();



    }

    static int searchForClosestDiff(int[] storageOfJackets, int currentTemperature) {


        int differenceClosest = Integer.MAX_VALUE;

        int low = 0;

        int high = storageOfJackets.length - 1;

        while (low <= high) {

            int mid = low + (high - low) / 2;

            int adjTemp = currentTemperature + storageOfJackets[mid];

            int difference = Math.abs(adjTemp - 70);

            if (difference < differenceClosest) {
                differenceClosest = difference;
            }

            if (adjTemp < 70) {

                low = mid + 1;

            } else {

                high = mid - 1;

            }
        }

        return differenceClosest;

    }

}
