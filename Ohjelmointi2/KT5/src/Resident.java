public class Resident {
    private String name;

    public Resident(String name) {
        this.name = name;
    }

    public String getName() {
        return this.name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public void print() {
        System.out.println("");
        System.out.println("Name of resident: " + name);
    }
}
