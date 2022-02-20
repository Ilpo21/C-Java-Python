import javax.sql.rowset.spi.SyncResolver;

public class Rakennus {
    
    private double area;
    private int rooms;
    private Resident[] residents;


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
    System.out.println("Number of rooms in building:"+rooms);

    System.out.println("Details of residents:");
    for(Resident resident: residents){
        resident.print();
    }
}
    
    
}
