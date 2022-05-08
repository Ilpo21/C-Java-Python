public class Building {
    private int numApartments;
    private double aArea;
    private int aRooms;
    private int numResidents;
    private Resident[] residents;

    public Building(int numApartments, double aArea, int aRooms, int numResidents, Resident[] residents) {

        this.numApartments = numApartments;
        this.aArea = aArea;
        this.aRooms = aRooms;
        this.numResidents = numResidents;
        this.residents = residents;

    }

    public int getNumApartments() {
        return this.numApartments;
    }

    public void setNumApartments(int numApartments) {
        this.numApartments = numApartments;
    }

    public double getAArea() {
        return this.aArea;
    }

    public void setAArea(double aArea) {
        this.aArea = aArea;
    }

    public int getARooms() {
        return this.aRooms;
    }

    public void setARooms(int aRooms) {
        this.aRooms = aRooms;
    }

    public int getNumResidents() {
        return this.numResidents;
    }

    public void setNumResidents(int numResidents) {
        this.numResidents = numResidents;
    }

    public Resident[] getResidents() {
        return this.residents;
    }

    public void setResidents(Resident[] residents) {
        this.residents = residents;
    }

    public void print() {
        System.out.println("");
        System.out.println("Number of apartments: " + numApartments);
        System.out.println("Area of Apartment: " + aArea);
        System.out.println("Number of rooms: " + aRooms);
        System.out.println("Number of residents: " + numResidents);
        for (Resident resident : residents) {
            resident.print();
        }
    }

}
