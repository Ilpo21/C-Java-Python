import java.util.Scanner;

public class Main {
    
    public static void main(String[] args){

        Scanner scan=new Scanner(System.in);
        
        //Kerätään tiedot normaaliin tilaukseen
        System.out.println("Give details of Regular Subscription");

        System.out.println("Give name of Magazine: ");
        String magazine=scan.nextLine();

        System.out.println("Give name of the subscriber: ");
        String name=scan.nextLine();

        System.out.println("Give address: ");
        String address=scan.nextLine();

        System.out.println("Give the duration of the order: ");
        int duration = Integer.parseInt(scan.nextLine());

        //Tarkistetaan ettein kesto ole negatiivinen
        if(duration<0){
            System.out.println("Duration cannot be negative");
            System.exit(0);
        }
        else{
            
            //Kerätään tiedot Toiseen tilaukseen
            System.out.println("");

            System.out.println("Give details of Standin Subscribtion");

            System.out.println("Give name of Magazine: ");
            String magazineStanding=scan.nextLine();

            System.out.println("Give name of the subscriber: ");
            String nameStanding =scan.nextLine();

            System.out.println("Give address: ");
            String addressStanding=scan.nextLine();

            System.out.println("Give discount sum as Integer: ");
            int discount=Integer.parseInt(scan.nextLine());

            System.out.println("");

            if(discount<0){
                System.out.println("Discount can't be negative: ");
            }
            else{
                Subscription [] subs = new Subscription[2];
                subs[0] = new RegularSubscription(magazine, name, address, duration);
                subs[1] = new StandingSubscription(magazineStanding, nameStanding, addressStanding, discount);

                printSubscriptionInvoice(subs);
            }

        }
        scan.close();

    }
    public static void printSubscriptionInvoice(Subscription [] subs){
        for( int i= 0; i< subs.length; i++){
            subs[i].printInvoice();
        }
    }
    
}
