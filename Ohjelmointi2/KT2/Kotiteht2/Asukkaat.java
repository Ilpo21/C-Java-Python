

public class Asukkaat {
    private String name;
    private String bday;

    public Resident(String name, String bday){
        this.name=name;
        this.bday=bday;
    }
 

    public String getName() {
        return this.name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getBDay() {
        return this.bday;
    }

    public void setBDay(String bDay) {
        this.bday = bday;
    }

    public void print(){
        System.out.println("Name of resident:"+ name);
        System.out.println("Birthdate of resident:"+ bday);
    }
}
