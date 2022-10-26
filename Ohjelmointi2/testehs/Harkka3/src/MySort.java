import java.util.Arrays;

public class MySort {

    public static <E> void sortingPrinting(E[] uArray) {
        Arrays.sort(uArray);
        for (int i = 0; i < uArray.length; i++) {
            System.out.print(uArray[i] + " ");
        }
        String type = uArray.getClass().getSimpleName();
        type = type.replaceAll("[^a-zA-Z0-9]", "");
        System.out.println("\nmin " + type + ": " + uArray[0] + ", max " + type + ": " + uArray[uArray.length - 1]);

    }

    public static void main(String[] args) {

        /*
         * TÄTÄ TEHTÄVÄÄ VARTEN MUUTA AO. TAULUKOT OLIOTAULUKOIKSI
         */
        Integer[] myIntArray = { 2, 5, 7, 1, 3, 9, 4, 6, 8, 1 };
        Double[] myDoubleArray = { 2.5, 5.3, 7.5, 7.2, 7.3, 1.4, 2.4, 3.6, 4.8, 1.2 };
        Character[] myCharArray = { 'B', 'D', 'A', 'G', 'C', 'J', 'H', 'F', 'E', 'I' };

        sortingPrinting(myIntArray);
        sortingPrinting(myDoubleArray);
        sortingPrinting(myCharArray);

    }

}