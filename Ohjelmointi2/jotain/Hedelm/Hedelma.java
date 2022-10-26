public abstract class Hedelma {

	private String nimi;
	private double kilohinta;
	private static int lkm;
	
	public Hedelma() {
		lkm++;
	}
	
	public String getNimi() {
		return nimi;
	}
	public void setNimi(String nimi) {
		this.nimi = nimi;
	}
	public double getKilohinta() {
		return kilohinta;
	}
	public void setKilohinta(final double kilohinta) {
		this.kilohinta = kilohinta;
	}
	
	public static int getLkm() {
		return lkm;
	}

	@Override
	public String toString() {
		return "Hedelma [nimi=" + nimi + ", kilohinta=" + kilohinta + "]";
	}
}
