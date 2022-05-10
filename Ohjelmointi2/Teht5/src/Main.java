import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws Exception {

        Scanner scan = new Scanner(System.in);

        // kerätään informaatiota
        System.out.println("Give name of plot :>");
        String pName = scan.nextLine();

        System.out.println("Give the area of plot :>");
        double pArea = scan.nextDouble();

        // tarkastetaan että syöte on sopiva
        if (pArea <= 0) {
            System.out.println("wrong input");
            System.exit(0);
        }

        // System.out.println("Give latitude of plot :>");
        // String latitude =scan.next();

        // System.out.println("Give longitude of plot :>");
        // String longitude = scan.next();

        // osoite
        System.out.println("Give address of the plot :>");
        String address = scan.next();

        // String location[]= new String[] {latitude, longitude};

        System.out.println("Pick number of what type of house.");
        System.out.println("1: Apartment building \n 2: Row house \n 3: Town house");
        double housenum = scan.nextDouble();

        // BUILDING
        System.out.println("Give number of apartments :>");
        int numaparments = scan.nextInt();

        
        
        for (int i = 0; i < numaparments; i++) {
        }
        System.out.println("Give area of apartment " + (i + 1) + " :>");
        double hArea = scan.nextDouble();

        // tarkastetaan että syöte on sopiva
        if (hArea <= 0) {
            System.out.println("Wrong input");
            System.exit(0);
        }

        System.out.println("Give number of rooms :>");
        int rooms = scan.nextInt();

        System.out.println("Give number of residents :>");
        int numresidents = scan.nextInt();

        // poistetaan "ylijäänyt" \n input
        scan.nextLine();
        // Array asukkaiden tallentamiseen
        // List <Residents> residents = new ArrayList<Residents>;

        Resident[] residents = new Resident[numresidents];

        for (int i = 0; i < numresidents; i++) {

            System.out.println("Give resident " + (i + 1) + "." + " name:");
            String rName = scan.nextLine();

            System.out.println("Give resident " + (i + 1) + "." + " birthdate");
            String bDate = scan.nextLine();

            // thedään asukkaista objekti
            Resident resident = new Resident(rName, bDate);

            // tallennetaan objekti array
            residents[i] = resident;

        }

        // tehdään rakennuksesta objekti
        Building building = new Building(hArea, rooms, residents);

        // tehdään alueesta objekti
        Plot plot = new Plot(pName, location, pArea, building);

        System.out.println();
        System.out.println("Information:");
        plot.print();
        scan.close();

    }
}
