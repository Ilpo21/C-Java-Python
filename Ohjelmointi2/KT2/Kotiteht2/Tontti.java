public class Tontti {

    private String name;
    private String[] location;
    private double area;
    private Building building;

    public Plot(String name, String[] location, double area, Building building){

        this.name=name;
        this.location=location;
        this.area=area;
        this.building=building;
    }

    public String getNme(){
        return name;
    }
    public void setName(String name){
        this.name=name;
    }

    

    public String[] getLocation() {
        return this.location;
    }

    public void setLocation(String[] location) {
        this.location = location;
    }

    public double getArea() {
        return this.area;
    }

    public void setArea(double area) {
        this.area = area;
    }

    public Building getBuilding() {
        return this.building;
    }

    public void setBuilding(Building building) {
        this.building = building;
    }

    public void print(){
System.out.println("Plot name:"+name);
System.out.println("Plot location:"+location[0]+location[1]);
System.out.println("Plot area:+area");
System.out.println("Building details:");
building.print();
    
    }

    
}
