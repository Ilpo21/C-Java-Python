public class Pankkitili {

    // muistio**
    // tilinumero = string
    // saldo = double
    // jäsenmuuttujat private
    // omistaja tilinumero saldo privatena
    // scanner must****
    // pankkitili olio
    // muistio**

    private double Deposit;
    private double Withdraw;

    private double eBalance;
    private String eNumber;
    private String eOwner;

    // public pankkitili(strint omistaja tilinumero salo)
    // sisälle
    // this-omistaja=omistaja;
    public Pankkitili(String eOwner, String eNumber, double eBalance) {

        this.eOwner = eOwner;
        this.eNumber = eNumber;
        this.eBalance = eBalance;

    }

    // Nimen hankinta tallennus tsydeemi
    public void setOwner(String eOwner) {
        this.eOwner = eOwner;
    }

    public String getOwner() {
        return eOwner;
    }

    // Tilinumero hankinta tallennus tsydeemi
    public void setNumber(String eNumber) {
        this.eNumber = eNumber;
    }

    public String getNumber() {
        return eNumber;
    }

    // Tilin saldo hankinta tallennus tsydeemi
    public void setBalance(double eBalance) {
        this.eBalance = eBalance;
    }

    public double getBalance() {
        return eBalance;
    }

    // Nosto hankinta tallennus tsydeemi
    public void setWithdraw(double Withdraw) {
        this.Withdraw = Withdraw;
    }

    // Talletus hankinta tallennus tsydeemi
    public void setDeposit(double Deposit) {
        this.Deposit = Deposit;
    }

    // Nosto ja talletusfunktio

    public void withdrawMoney() {
        if (Withdraw > eBalance || Withdraw <= 0) { // onko nostettava summa mahdollinen
            System.out.println("Improper Withdraw");
        } else {
            eBalance = eBalance - Withdraw;
            System.out.println("You withdrew:" + Withdraw);
            System.out.println("You new Balance is:" + eBalance);
        }

    }

    public void depositMoney() {
        if (Deposit <= 0) { // antaa tallentaa vain positiivisia lukuja jotka ovat suurempia kuin 0
            System.out.println("Improper Deposit");
        }

        else {
            eBalance = eBalance + Deposit;
            System.out.println("You deposited:" + Deposit);
            System.out.println("Your new Balance is:" + eBalance);
        }
    }

}
