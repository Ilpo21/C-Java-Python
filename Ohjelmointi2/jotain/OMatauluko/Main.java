package uusipakkaus;
//import java.util.ArrayList;
//import java.util.List;

import java.util.ArrayList;
import java.util.List;

public class Main {

	public static void main(String [] args ) {
		
		//Henkilo [] henkilot = new Henkilo[5];
		//List<Opiskelija> henkilot = new ArrayList<>();

		OmaTaulukko<Opiskelija> henkilot = new OmaTaulukko<>();
		OmaTaulukko<Tyotekija> tekijat = new OmaTaulukko<>();
		//OmaTaulukko merkit = new OmaTaulukko();
		OmaTaulukko<Integer> luvut = new OmaTaulukko<>();
				
		henkilot.lisaa(new Opiskelija("Kalle", "Kehveli", 2000));
		henkilot.lisaa(new Opiskelija("Aku", "Ankka", 1995));
		tekijat.lisaa(new Tyotekija());
		tekijat.lisaa(new Tyotekija());

//		tekijat.lisaa("Viivi");
		
//		henkilot.add(new Opiskelija("Kalle", "Kehveli", 2000));
//		henkilot.add(new Tyotekija());
//		henkilot.add(new Opiskelija("Aku", "Ankka", 1995));
//		henkilot.add(new Tyotekija());
//		henkilot.add("Viivi");
		
		System.out.println(henkilot);
		
		Opiskelija kalle = henkilot.hae(0);
		System.out.println(kalle);
		
		int luku = 10;
		// Ei onnistu, luvut erikoistettu kokonaisluvuille...
		//luvut.lisaa(45.7);
		luvut.lisaa(Integer.parseInt("123456"));
		luvut.lisaa(luku);
		
		//henkilot[4] = "Aku Ankka";
		
//		henkilot.add(tyontekija1);
//		henkilot.add(opiskelija1);
//		henkilot.add(opiskelija);
//		henkilot.add(tyontekija);
		
//		for (Henkilo h : henkilot) {
//			System.out.println(h);
//		}
			
//		henkilot.add("Kalle Kehveli");
//		henkilot.add("Aku Ankka");
		
//		for (int i = 0; i < henkilot.size(); i++) {
//			System.out.println("[" + i +"]: " + henkilot.get(i));
//		}
		
//		opiskelija.tulostaOppiarvo();
//		tyontekija.tulostaOppiarvo();
	}
}
