import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws Exception {

        Scanner scan = new Scanner(System.in);

        // PLOT
        System.out.println("Give name of plot :>");
        String pName = scan.nextLine();

        System.out.println("Give the area of plot :>");
        double pArea = scan.nextDouble();

        // tarkastetaan että syöte on sopiva
        if (pArea <= 0) {
            System.out.println("wrong input");
            System.exit(0);
        }
        scan.nextLine();

        System.out.println("Give address of the plot :>");
        String address = scan.nextLine();

        System.out.println("What type of house? Type answer.\nApartment building \n Row house \n Town house");
        String typeHouse = scan.nextLine();

        // BUILDING

        System.out.println("How many apartments? :>");
        int numApartments = scan.nextInt();

        Building[] buildings = new Building[numApartments];

        for (int i = 0; i < numApartments; i++) {
            System.out.println("Area of apartment :>");
            double aArea = scan.nextDouble();

            System.out.println("Number of rooms :>");
            int aRooms = scan.nextInt();

            System.out.println("Number of residents :>");
            int numResidents = scan.nextInt();

            scan.nextLine();
            // RESIDENTS
            Resident[] residents = new Resident[numResidents];
            for (int j = 0; j < numResidents; j++) {
                System.out.println("Give resident " + (j + 1) + "." + " name:");
                String nResident = scan.nextLine();

                // thedään asukkaista objekti
                Resident resident = new Resident(nResident);

                // tallennetaan objekti array
                residents[j] = resident;
            }

            Building building = new Building(numApartments, aArea, aRooms, numResidents, residents);

            buildings[i] = building;
        }

        Plot plot = new Plot(pName, pArea, address, typeHouse, buildings);

        System.out.println();
        System.out.println("Information:");
        plot.print();
        scan.close();

    }
}
