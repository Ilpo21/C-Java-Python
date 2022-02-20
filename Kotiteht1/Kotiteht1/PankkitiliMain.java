import java.util.Scanner;

public class PankkitiliMain {

    public static void main(String[] args) {

        Scanner scan = new Scanner(System.in);

        double eWithdraw;
        double eDeposit;

        int choice;

        // alempana kysytään käyttänä tilin omistajan nimi
        System.out.println("Give account owner :>");
        String eOwner = scan.nextLine();

        // alempana kysytään käyttäjän tilinnumero
        System.out.println("Give account number :>");
        String eNumber = scan.nextLine();

        // alempana kysytään käyttäjän tilin saldo
        System.out.println("Give account balance :>");
        double eBalance = scan.nextDouble();

        Pankkitili acc1 = new Pankkitili(eOwner, eNumber, eBalance);

        // rakentaa pienen tarkistuksen, ettei voi antaa saldoon negatiivista numeroa
        if (eBalance < 0) {
            System.out.println("You cannot give negative numbers as your balance.");
            System.exit(0);
        }

        // jos saldossa ei ongelmaa ohjelma jatkuu

        System.out.println("Welcome! " + acc1.getOwner());
        System.out.println("Your account number is: " + acc1.getNumber());
        System.out.println("Your balance is: " + acc1.getBalance());

        System.out.println("Pick action:");
        System.out.println("1. Withdraw ");
        System.out.println("2. Deposit");
        System.out.println("3. Exit");
        Scanner scan4 = new Scanner(System.in);
        choice = scan4.nextInt();

        // valinnan tarkitus
        if (choice < 1 || choice > 3) {
            System.out.println("Wrong input");
            System.exit(0);
        } else {
            switch (choice) {

                case 1: // case rahan nostolle
                    System.out.println("How much money do you want to Withdraw? :");
                    Scanner scan5 = new Scanner(System.in);
                    eWithdraw = scan5.nextDouble();
                    acc1.setWithdraw(eWithdraw);
                    acc1.withdrawMoney();
                    break;
                case 2: // case rahan laitolle
                    System.out.println("How much money do you want to Deposit? :");
                    Scanner scan6 = new Scanner(System.in);
                    eDeposit = scan6.nextDouble();
                    acc1.setDeposit(eDeposit);
                    acc1.depositMoney();
                    break;
                case 3:// case jos ei "exit"
                    System.out.println("Have a nice day!");
                    System.exit(0);
            }
        }

    }

}
// sytem out priont
// Strin omistaja = likioja.nexLine