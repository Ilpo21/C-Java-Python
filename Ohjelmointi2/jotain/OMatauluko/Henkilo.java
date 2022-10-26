package uusipakkaus;
import rajapinnat.Valmistuminen;

public abstract class Henkilo implements Valmistuminen {

	private String eNimi;
	private String sNimi;
	private int sVuosi;
	
	public Henkilo () {}
	
	public Henkilo (String eNimi, String sNimi, int sVuosi) {
		this.eNimi = eNimi;
		this.sNimi = sNimi;
		this.sVuosi = sVuosi;
	}
	
	public String geteNimi() {
		return eNimi;
	}
	public void seteNimi(String eNimi) {
		this.eNimi = eNimi;
	}
	public String getsNimi() {
		return sNimi;
	}
	public void setsNimi(String sNimi) {
		this.sNimi = sNimi;
	}
	public int getsVuosi() {
		return sVuosi;
	}
	public void setsVuosi(final int sVuosi) {
		this.sVuosi = sVuosi;
	}
	@Override
	public String toString() {
		return "Henkilo [eNimi=" + eNimi + ", sNimi=" + sNimi + ", sVuosi=" + sVuosi + "]";
	}
}
