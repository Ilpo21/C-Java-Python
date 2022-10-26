package uusipakkaus;
import java.util.Arrays;

public class OmaTaulukko<T> {

	private T [] taulukko;
	private int koko;
	
	@SuppressWarnings("unchecked")
	public OmaTaulukko() {
		taulukko = (T[]) new Object[5];
		koko = 0;
	}
	
	public void lisaa(T o) {
		
		int i = 0;
		if (koko >= taulukko.length) {
			@SuppressWarnings("unchecked")
			T [] uusi = (T[])new Object[koko + 5];
			for (i = 0; i < koko; i++) {
				uusi[i] = taulukko[i];
			}
			taulukko = uusi;
		}
		taulukko[koko] = o;
		koko++;
	}
	
	public T hae(int i) {
		T temp;
		temp = (i >= 0 && i < koko) ? taulukko[i] : null;
		return temp;
	}

	@Override
	public String toString() {
		return "OmaTaulukko [taulukko=" + Arrays.toString(taulukko) + ", koko=" + koko + "]";
	}

}
