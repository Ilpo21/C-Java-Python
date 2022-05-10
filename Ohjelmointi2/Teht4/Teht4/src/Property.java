public class Property{

private String property;
private String location;


    public Property(String string, String string2) {
        this.property = string;
        this.location = string2;
}

    

    public String getProperty() {
        return this.property;
    }

    public void setProperty(String property) {
        this.property = property;
    }

    public String getLocation() {
        return this.location;
    }

    public void setLocation(String location) {
        this.location = location;
    }

    public String toString(){

        return "Property: " + property + " Location: " + location + "\n";
    }

}