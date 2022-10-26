public class Main {

	public static void main(String [] args) {
		
		// Hyödynnetään luokkakohtaista (static) Hedelmaluokka luokan metodia luoHedelma
		Hedelma hed1 = HedelmaLuokka.luoHedelma("OmEna", "Green day", 2.37);		
		Hedelma hed2 = HedelmaLuokka.luoHedelma("OmENa", "Red delicious", 1.37); 
		Hedelma hed3 = HedelmaLuokka.luoHedelma("BANAANI", "Chiquita", 0.87);
		Hedelma hed4 = HedelmaLuokka.luoHedelma("Paaryna", "Paaryna1", 5.33);
		// Luokkaa Pomelo ei ole olemassakaan, mutta se ei haittaa...
		Hedelma hed5 = HedelmaLuokka.luoHedelma("Pomelo", "Pomelo1", 12.77);
			
		//Ei sallittua
		//Banaani hed6 = HedelmaLuokka.luoHedelma("BANAANI", "Chiquita", 0.87);
			
		System.out.println(hed1);
		System.out.println(hed2);
		System.out.println(hed3);
		System.out.println(hed4);
		System.out.println(hed5);
		System.out.println(Hedelma.getLkm());
		
		// Alkuun luotiin kantaluokan olioita
		//Hedelma hed1 = new Omena();
		//hed1.setNimi("Omena");
		//hed1.setKilohinta(2.37);
		//Hedelma omena1 = new Omena();
		//omena1.setNimi("Red delicious");
		//omena1.setKilohinta(1.37);
		//Hedelma banaani1 = new Banaani();
		//banaani1.setNimi("Chiquita");
		//banaani1.setKilohinta(2.22);
	}
}
