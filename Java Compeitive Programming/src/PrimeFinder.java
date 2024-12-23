public class PrimeFinder {

    public static void main(String[] args) {


        long maxPrime = -1;

        long n = 65l;

        while (n % 2 == 0) {
            maxPrime = 2;

            n >>= 1;



        }

        for (int i = 3; i * i <= (n); i += 2) {
            while (n % i == 0) {
                maxPrime = i;
                n = n / i;
            }
        }

        if (n > 2) {
            maxPrime = n;
        }

        System.out.println(maxPrime);








    }

}
