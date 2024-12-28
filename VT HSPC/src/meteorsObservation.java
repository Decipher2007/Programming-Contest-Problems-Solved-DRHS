import java.util.*;
import java.lang.*;
import java.io.*;

class MeteorPoint {
    private int xCoordinate;
    private int yCoordinate;

    public MeteorPoint(int xCoordinate, int yCoordinate) {

        this.xCoordinate = xCoordinate;
        this.yCoordinate = yCoordinate;

    }

    public int getXCoord() {

        return xCoordinate;

    }

    public int getYCoord() {

        return yCoordinate;

    }




}
public class meteorsObservation {


    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int testcase = in.nextInt();

        ArrayList<Double> storageOfAngles = new ArrayList<Double>();
        ArrayList<MeteorPoint> pairArrayList = new ArrayList<MeteorPoint>();

        for (int i = 0; i < testcase; i++) {

            int xCoord = in.nextInt();
            int yCoord = in.nextInt();

            MeteorPoint p1 = new MeteorPoint(xCoord, yCoord);

            pairArrayList.add(p1);


        }

        int xCoordOfTelescope = in.nextInt();
        int yCoordOfTelescope = in.nextInt();

        double pov = in.nextDouble();

        for (int i = 0; i < pairArrayList.size(); i++) {


            double angle = Math.toDegrees(Math.atan2(pairArrayList.get(i).getYCoord() - yCoordOfTelescope, pairArrayList.get(i).getXCoord() - xCoordOfTelescope));
            if (angle < 0) {
                angle += 360;
            }
            angle = (int) (angle * Math.pow(10, 3)) / Math.pow(10, 3);
//            System.out.println(angle);
            storageOfAngles.add(angle);
            storageOfAngles.add(angle + 360);


        }

        Collections.sort(storageOfAngles);
//        System.out.println(storageOfAngles);

        int right = 0;

        int maxinumAmountOfMeteors = 0 ;
        for (int left = 0; left < storageOfAngles.size(); left++) {
//            System.out.println(right);
            while (right < storageOfAngles.size() && storageOfAngles.get(right) - storageOfAngles.get(left) <= pov)
            {
                right++;
            }
//            System.out.println(maxinumAmountOfMeteors);
            maxinumAmountOfMeteors = Math.max(maxinumAmountOfMeteors, right - left);
        }


        System.out.println(maxinumAmountOfMeteors);






    }

}
