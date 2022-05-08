
import java.util.ArrayList;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        // Tämän avulla saadaan tiedosto missä sijaitsee sanat. Kirjoittaa "" merkkeihin
        // tiedoston nimen.
        String tiedosto = "List.txt";
        Sanalista sanalista = new Sanalista(tiedosto);
        ArrayList sanat = sanalista.annaSanat();
        Hirsipuu peli = new Hirsipuu(sanat, 6);

        String arvattava = peli.sana();
        char[] viivat = new char[arvattava.length()];
        int i = 0;
        while (i < arvattava.length()) {
            viivat[i] = '_';
            if (arvattava.charAt(i) == ' ') {
                viivat[i] = ' ';
            }
            i++;
        }
        // pelin aloitus
        System.out.println("<Hirsipuu Peli>");
        System.out.println("*******************");

        System.out.println(" -------");
        System.out.println(" |     |");

        System.out.println(viivat);
        int arvausLkm = peli.arvauksiaOnJaljella();
        System.out.println("Arvauksia on jaljella: " + arvausLkm);

        while (arvausLkm > 0) {
            char arvaus = kysyKirjain();
            boolean onnistuiko = peli.arvaa(arvaus);
            if (onnistuiko) {
                // printtaa että arvaus on oikein
                System.out.println("Oikein!");
                System.out.println("************************");
                System.out.println("");
                // korvaa viivoja kirjaimilla
                for (int j = 0; j < arvattava.length(); j++) {
                    if (arvattava.charAt(j) == arvaus) {
                        viivat[j] = arvaus;
                    }
                }
                if (peli.onLoppu(viivat)) {
                    // printtaa voittaneesi pelin ja oikean sanan
                    System.out.println("Sana oli:");
                    System.out.println(viivat);
                    System.out.println("###############");
                    System.out.println("#Voitit pelin!#");
                    System.out.println("###############");
                    break;
                }
            } else {
                // printaa arvauksen menneen värin
                System.out.println("Väärin meni :(");
                System.out.println("Kokeile uudelleen!");
                System.out.println("************************");
                System.out.println("");
            }
            arvausLkm = peli.arvauksiaOnJaljella();
            ukkoHirtto(arvausLkm);
            System.out.println(viivat);
            System.out.println("Arvauksia on jaljella: " + arvausLkm);
            System.out.println("Arvatut kirjaimet: " + peli.arvaukset());
            // printtaa pelin päättyneeksi kun arvaukset loppuvat
            if (arvausLkm == 0) {
                System.out.println("###############");
                System.out.println("#Peli paattyi.#");
                System.out.println("###############");
            }

        }
        scan.close();
    }

    // kysyy arvattavan kirjaimen
    public static Character kysyKirjain() {
        Scanner scan = new Scanner(System.in);

        System.out.println("Arvaa kirjain:");
        char c = scan.next().charAt(0);
        return c;

    }

    // printaa vaiheitta itse ukon
    public static void ukkoHirtto(Integer arvausLkm) {
        System.out.println("<Hirsipuu Peli>");
        System.out.println(" -------");
        System.out.println(" |     |");
        if (arvausLkm <= 5) {
            System.out.println(" O");
        }

        if (arvausLkm <= 4) {
            System.out.print("\\ ");
            if (arvausLkm <= 3) {
                System.out.println("/");
            } else {
                System.out.println("");
            }
        }

        if (arvausLkm <= 2) {
            System.out.println(" |");
        }

        if (arvausLkm <= 1) {
            System.out.print("/ ");
            if (arvausLkm <= 0) {
                System.out.println("\\");
            } else {
                System.out.println("");
            }
        }
        System.out.println("");
    }
}
