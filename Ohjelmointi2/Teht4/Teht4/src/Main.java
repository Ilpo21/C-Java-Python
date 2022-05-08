
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        
        Scanner scan = new Scanner(System.in);

 Property p1= new Property("Cottage","Simo");
 Property p2= new Property("House", "Vantaa");
 Property p3= new Property("Bar", "Oulu");
 Property p4= new Property("Car", "Helsinki");
 Property p5= new Property("Villa","China");

 InsuranceInfo i1=new InsuranceInfo(p1, 125000);
 InsuranceInfo i2=new InsuranceInfo(p2, 30000);
 InsuranceInfo i3=new InsuranceInfo(p3, 60000);
 InsuranceInfo i4=new InsuranceInfo(p4, 2500);
 InsuranceInfo i5=new InsuranceInfo(p5, 1500000);

 InsInfoContainer list=new InsInfoContainer(null);

list.addInfo(i1);
list.addInfo(i2);
list.addInfo(i3);
list.addInfo(i4);
list.addInfo(i5);
list.print();

System.out.println("Give limit to insurance, Smaller values will be printed: ");
int limit=scan.nextInt();
while(limit<0){
    System.out.println("Error, limit cannot be a negative value.\n Try again. Give another value" );
    limit=scan.nextInt();
}
list.printSmall(limit);

System.out.println("give limit to insurance, Bigger numbers will be printer: ");
int limit1=scan.nextInt();
while(limit1<0){
    System.out.println("Error, limit cannot be a negative value.\n Try again. Give another value" );
    limit1=scan.nextInt();
}
list.printLarge(limit1);

scan.close();


    }


}
