package uusipakkaus;
import rajapinnat.Palkanmaksu;

public class Tyotekija extends Henkilo implements Palkanmaksu {

	private int id;
	private String tehtava;
	
	public int getId() {
		return id;
	}
	public void setId(int id) {
		this.id = id;
	}
	public String getTehtava() {
		return tehtava;
	}
	public void setTehtava(String tehtava) {
		this.tehtava = tehtava;
	}
	
	@Override
	public double maksaPalkka() {
		return 3000;
	}
	
	@Override
	public String toString() {
		return super.toString() +
				"\n\tTyotekija [id=" + id + ", tehtava=" + tehtava + "]";
	}
	
	
//	@Override
//	public void tulostaOppiarvo() {
//		// TODO Auto-generated method stub
//		
//	}
}
