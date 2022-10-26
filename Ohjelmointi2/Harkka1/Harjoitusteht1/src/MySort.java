import java.util.Arrays;

public class MySort {
    public static void main(String[] args) {

        int[] myIntArray = { 2, 5, 7, 1, 3, 9, 4, 6, 8, 1 };
        double[] myDoubleArray = { 2.5, 5.3, 7.5, 7.2, 7.3, 1.4, 2.4, 3.6, 4.8, 1.2 };
        char[] myCharArray = { 'B', 'D', 'A', 'G', 'C', 'J', 'H', 'F', 'E', 'I' };

        sortAndPrint(myIntArray);
        sortAndPrint(myDoubleArray);
        sortAndPrint(myCharArray);

    }

    public static void sortAndPrint(int[] arr) {
        Integer max = 0;
        Integer min = 0;
        Arrays.sort(arr);
        for (Integer integer : arr) {
            System.out.print(integer + " ");
        }
        System.out.println();

        for (int i = 0; i < arr.length; i++) {
            if (arr[i] > max)
                max = arr[i];
        }
        min = max;
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] < min)
                min = arr[i];
        }
        System.out.println("min Integer: " + min + ", max Integer: " + max);
    }

    public static void sortAndPrint(double[] darr) {
        Double max = 0.0;
        Double min = 0.0;
        Arrays.sort(darr);
        for (Double doubleNum : darr) {
            System.out.print(doubleNum + " ");
        }
        System.out.println();
        for (int i = 0; i < darr.length; i++) {
            if (darr[i] > max)
                max = darr[i];
        }
        min = max;
        for (int i = 0; i < darr.length; i++) {
            if (darr[i] < min)
                min = darr[i];
        }
        System.out.println("min Double: " + min + ", max Double: " + max);
    }

    public static void sortAndPrint(char[] carr) {
        Character min = ' ';
        Character max = ' ';
        Arrays.sort(carr);
        for (Character character : carr) {
            System.out.print(character + " ");
        }
        System.out.println();
        for (int i = 0; i < carr.length; i++) {
            if (carr[i] > max)
                max = carr[i];
        }
        min = max;
        for (int i = 0; i < carr.length; i++) {
            if (carr[i] < min)
                min = carr[i];
        }
        System.out.println("min Character: " + min + ", max Character: " + max);
    }

}