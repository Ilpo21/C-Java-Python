
import java.io.File;
import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner lukija = new Scanner(System.in);
        boolean ok = false;

        do {
            try {
                String tiedosto = "H:\\Lipasto\\code\\Ohjelmointi2\\Teht6\\KT6\\src\\List.txt";
                Sanalista sanalista = new Sanalista(tiedosto);
                ArrayList sanat = sanalista.annaSanat();
                Hirsipuu peli = new Hirsipuu(sanat, 10);

                String arvattava = peli.sana();
                char[] tayte = new char[arvattava.length()];
                int i = 0;

                // Tulostaa sanan alle viivat jne
                while (i < arvattava.length()) {
                    tayte[i] = '_';
                    if (arvattava.charAt(i) == ' ') {
                        tayte[i] = ' ';
                    }
                    i++;
                }

                System.out.println("Tervetuloa pelaamaan hirsipuuta!");
                System.out.println(tayte);
                int arvausLkm = peli.arvauksiaOnJaljella();
                System.out.println("Arvauksia on jaljella: " + arvausLkm);

                while (arvausLkm > 0) {
                    char arvaus = kysyKirjain();
                    boolean onnistuiko = peli.arvaa(arvaus);
                    if (onnistuiko) {
                        System.out.println("Hienoa!");
                        for (int j = 0; j < arvattava.length(); j++) {
                            if (arvattava.charAt(j) == arvaus) {
                                tayte[j] = arvaus;
                            }
                        }
                        if (peli.onLoppu(tayte)) {
                            System.out.println(tayte);
                            System.out.println("Voitit pelin!");
                            break;
                        }
                    } else {
                        System.out.println("Kirjainta ei löytynyt.");
                    }
                    arvausLkm = peli.arvauksiaOnJaljella();
                    System.out.println(tayte);
                    System.out.println("Arvauksia on jäljellä: " + arvausLkm);
                    System.out.println("Arvatut kirjaimet: " + peli.arvaukset());
                    if (arvausLkm == 0) {
                        System.out.println("Peli paattyi.");
                    }
                    ok = true;
                }
            } catch (Exception e) {
                System.out.println("Virhe syotteessa.");
                System.out.println("Virhe: " + e.getMessage());
            }
        } while (ok != true);
    }

    public static Character kysyKirjain() {
        Scanner lukija = new Scanner(System.in);
        boolean ok = false;

        do {
            try {
                System.out.println("Arvaa kirjain: ");
                String apu = lukija.nextLine();
                char kirjain = toLowerCase(apu.charAt(0));
                ok = true;
                return kirjain;
            } catch (Exception e) {
                System.out.println("Virhe syotteessa.");
                System.out.println("Virhe: " + e.getMessage());
            }
        } while (ok != true);

        return null;
    }

    private static char toLowerCase(char charAt) {
        return 0;
    }

    System.out.println(" -------");System.out.println(" |     |");if(arvausLkm>=1)

    {
          System.out.println(" O");
        }

    if(arvausLkm>=2)
    {
        System.out.print("\\ ");
        if (arvausLkm >= 3) {
            System.out.println("/");
        } else {
            System.out.println("");
        }
    }

    if(arvausLkm>=4)
    {
        System.out.println(" |");
    }

    if(arvausLkm>=5)
    {
        System.out.print("/ ");
        if (arvausLkm >= 6) {
            System.out.println("\\");
        } else {
            System.out.println("");
        }
    }System.out.println("");System.out.println("");
}
// Random rand = new Random();
// sana = sanat.get(rand.nextInt(sanat.size()));

// System.out.println(scan.nextLine());

// int wrongCount = 0;
// System.out.println(" -------");
// System.out.println(" | |");
// if (wrongCount >= 1) {
// System.out.println(" O");
// }

// if (wrongCount >= 2) {
// System.out.print("\\ ");
// if (wrongCount >= 3) {
// System.out.println("/");
// } else {
// System.out.println("");
// }
// }

// if (wrongCount >= 4) {
// System.out.println(" |");
// }

// if (wrongCount >= 5) {
// System.out.print("/ ");
// if (wrongCount >= 6) {
// System.out.println("\\");
// } else {
// System.out.println("");
// }
// }
// System.out.println("");
// System.out.println("");
