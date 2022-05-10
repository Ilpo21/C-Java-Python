

public class Subscription {
 
    private String magazine;
    private String name;
    private String address;
    private double monthlyPrice;

    public Subscription(String magazine, String name, String address){
    this.magazine=magazine;
    this.name=name;
    this.address=address;
    this.monthlyPrice=10.00;

    }

    public String getMagazine() {
        return this.magazine;
    }

    public void setMagazine(String magazine) {
        this.magazine = magazine;
    }

    public String getName() {
        return this.name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getAddress() {
        return this.address;
    }

    public void setAddress(String address) {
        this.address = address;
    }

    public double getMonthlyPrice(){
        return this.monthlyPrice;
    }

    public void setMonthlyPrice(double monthlyPrice) {
        this.monthlyPrice = monthlyPrice;
    }

    public void printInvoice(){
    }

    public String toString(){
        return "\nMagazine:" +this.magazine +"\nSubscriber:" +this.name + "\n Address: "+ this.address + "\nPrice:"+ this.monthlyPrice +" /kk";
    }
    


}
