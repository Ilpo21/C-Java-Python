
import java.util.List;

public class Building {
    private double area;
    private int rooms;
    private Resident[] residents;

    public Building(double area, int rooms, Resident[] residents){

        this.area=area;
        this.rooms=rooms;
        this.residents=residents;
    }


    public double getArea() {
        return this.area;
    }

    public void setArea(double area) {
        this.area = area;
    }

    public int getRooms() {
        return this.rooms;
    }

    public void setRooms(int rooms) {
        this.rooms = rooms;
    }

    public Resident[] getResidents() {
        return this.residents;
    }

    public void setResidents(Resident[] residents) {
        this.residents = residents;
    }
public void print(){
    System.out.println("Area of building: "+area);
    System.out.println("Number of rooms in building: "+rooms);
    System.out.println("");
    System.out.println("Details of residents: ");
    for(Resident resident: residents){
        resident.print();
    }
}
    
}
