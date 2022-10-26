package uusipakkaus;
public class Opiskelija extends Henkilo {

	private int id;
	private int aloitusVuosi;
	private int valmistumisVuosi;
	private String paaAine;

	public Opiskelija(String eNimi, String sNimi, int sVuosi) {
		super(eNimi, sNimi, sVuosi);
	}
	
	public int getId() {
		return id;
	}
	public void setId(final int id) {
		this.id = id;
	}
	public int getAloitusVuosi() {
		return aloitusVuosi;
	}
	public void setAloitusVuosi(final int aloitusVuosi) {
		this.aloitusVuosi = aloitusVuosi;
	}
	public String getPaaAine() {
		return paaAine;
	}
	public void setPaaAine(String paaAine) {
		this.paaAine = paaAine;
	}
	public int getValmistumisVuosi() {
		return valmistumisVuosi;
	}
	public void setValmistumisVuosi(int valmistumisVuosi) {
		this.valmistumisVuosi = valmistumisVuosi;
	}
	
	@Override
	public void tulostaOppiarvo() {
		if (valmistumisVuosi > 0) {
			System.out.println("Opiskelija valmistunut: " + valmistumisVuosi);
		}
		else  {
			System.out.println("Ei vielä valmistunut.");
		}
	}
	@Override
	public String toString() {
		return super.toString() +
				"\n\tOpiskelija [id=" + id + ", aloitusVuosi=" + aloitusVuosi + ", valmistumisVuosi=" + valmistumisVuosi
				+ ", paaAine=" + paaAine + "]";
	}
}
