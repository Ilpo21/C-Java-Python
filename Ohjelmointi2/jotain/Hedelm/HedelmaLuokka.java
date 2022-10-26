public class HedelmaLuokka {

	private HedelmaLuokka() {
		
	}
	
	/* Luokkakohtainen metodi, jolla voidaan luoda erilaisia
	 * aliluokkien olioita. 
	 */
	public static Hedelma luoHedelma(String tyyppi, String nimi, 
			double khinta) {
	
		// Paikallinen muuttuja, tulee alustaa
		Hedelma hedelma = null;
		
		// Huomaa equalsIgnoreCase!
		if (tyyppi.equalsIgnoreCase("Banaani")) {
			hedelma = new Banaani();
		}
		else if (tyyppi.equalsIgnoreCase("Omena")) {
			hedelma = new Omena();
		}
		else if (tyyppi.equalsIgnoreCase("Paaryna")) {
			hedelma = new Paaryna();
		}

		// Jos olio on luotu, sille voi asettaa arvot
		if (hedelma != null) {
			hedelma.setNimi(nimi);
			hedelma.setKilohinta(khinta);
		}
		
		return hedelma;
	}
}
