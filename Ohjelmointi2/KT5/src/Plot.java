public class Plot {
    private String pName;
    private String address;
    private double pArea;
    private String typeHouse;
    private Building[] buildings;

    public Plot(String pName, double pArea, String address, String typeHouse, Building[] buildings) {
        this.pName = pName;
        this.address = address;
        this.pArea = pArea;
        this.typeHouse = typeHouse;
        this.buildings = buildings;
    }

    public String getPName() {
        return this.pName;
    }

    public void setPName(String pName) {
        this.pName = pName;
    }

    public String getAddress() {
        return this.address;
    }

    public void setAddress(String address) {
        this.address = address;
    }

    public double getPArea() {
        return this.pArea;
    }

    public void setPArea(double pArea) {
        this.pArea = pArea;
    }

    public String getTypeHouse() {
        return this.typeHouse;
    }

    public void setTypeHouse(String typeHouse) {
        this.typeHouse = typeHouse;
    }

    public Building[] getBuilding() {
        return this.buildings;
    }

    public void setBuilding(Building[] buildings) {
        this.buildings = buildings;
    }

    public void print() {
        System.out.println("Plot name: " + pName);
        System.out.println("Plot address: " + address);
        System.out.println("Plot area: " + pArea);
        System.out.println("Type of house: " + typeHouse);
        System.out.println("");
        System.out.println("Building details: ");
        for (Building building : buildings) {
            building.print();
        }

    }

}
