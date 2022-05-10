import java.io.File;
import java.util.ArrayList;
import java.util.Scanner;
import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.List;
import java.util.Random;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws FileNotFoundException {

        Scanner scanner = new Scanner(new
        File("H:\\Lipasto\\code\\Ohjelmointi2\\Test\\FileRead\\src\\List.txt"));
        ArrayList<String> file = new ArrayList<String>();

        while (scanner.hasNext()) {
        System.out.println(scanner.nextLine());

        }
        
}
