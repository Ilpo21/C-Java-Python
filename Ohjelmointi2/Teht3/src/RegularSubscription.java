

public class RegularSubscription extends Subscription{

    private int duration;

    public RegularSubscription(String magazine, String name, String address, int duration){
        super(magazine, name, address);
        this.duration=duration;
    }
    public void setDuration(int duration){
        this.duration=duration;
    }

    public int getDuration(){
        return this.duration;
    }

    public void printInvoice(){
        double price=duration+getMonthlyPrice();
        System.out.println("Regular Subscription: \n" + getName() + "\n" + getAddress() + "\nOrde information \n" + getMagazine() + "\n Duration of subscription: " + this.duration + " kk\nPrice: " + price + " euros\n");

    }

    public String toString(){
        return super.toString() +"\nDuration:"+this.duration;
    }
        
    
}
