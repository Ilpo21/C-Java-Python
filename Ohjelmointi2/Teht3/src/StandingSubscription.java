

public class StandingSubscription extends Subscription{

    private int discount;

    public StandingSubscription(String magazineStanding, String nameStanding, String addressStaning, int discount){
        super(magazineStanding, nameStanding, addressStaning);
        this.discount=discount;
    }
    public void setDiscount(int discount){
        this.discount=discount;
    }
    public int getDiscount(){
        return this.discount;
    }

    public void printInvoice(){
        double price = 12* getMonthlyPrice()*(1.00-(this.discount / 100.00));
        System.out.println("Standing  Subscription\n Information of subscriber: \n"+getName()+"\n"+getAddress()+"\nBilling information: \n"+ getMagazine() +"\n Price of order:\n"+price+"/kk");
    }

    public String toString(){
        return "\n Amount of discount:"+this.discount;
    }
}
