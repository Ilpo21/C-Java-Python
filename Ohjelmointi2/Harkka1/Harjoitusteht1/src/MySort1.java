import java.util.Arrays;

public class MySort {

    public static void sortAndPrint(int[] arr) {

        {
            Arrays.sort(arr);
            for (int num : arr) {
                System.out.print(num + " ");
            }

            Integer max = arr[arr.length - 1];
            Integer min = arr[0];
            System.out.print("\n");
            System.out.println("min Integer: " + min + ", " + "max Integer: " + max);
        }
    }

    public static void sortAndPrint(double[] arrDouble) {

        {
            Arrays.sort(arrDouble);
            for (double num : arrDouble) {
                System.out.print(num + " ");
            }

            double max = arrDouble[arrDouble.length - 1];
            double min = arrDouble[0];
            System.out.print("\n");
            System.out.println("min Double: " + min + ", " + "max Double: " + max);
        }
    }

    public static void sortAndPrint(char[] myCharArray) {

        {
            Arrays.sort(myCharArray);
            for (char chara : myCharArray) {
                System.out.print(chara + " ");
            }

            char max = myCharArray[myCharArray.length - 1];
            char min = myCharArray[0];
            System.out.print("\n");
            System.out.println("min Character: " + min + ", " + "max Character: " + max);
        }
    }

    public static void main(String[] args) {

        int[] myIntArray = { 2, 5, 7, 1, 3, 9, 4, 6, 8, 1 };
        double[] myDoubleArray = { 2.5, 5.3, 7.5, 7.2, 7.3, 1.4, 2.4, 3.6, 4.8, 1.2 };
        char[] myCharArray = { 'B', 'D', 'A', 'G', 'C', 'J', 'H', 'F', 'E', 'I' };

        sortAndPrint(myIntArray);
        sortAndPrint(myDoubleArray);
        sortAndPrint(myCharArray);

    }
}