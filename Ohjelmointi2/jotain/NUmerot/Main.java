package numerot;

import java.util.Arrays;

public class Main {
	
	//@SuppressWarnings("unchecked")
	public static <T> double laskeSumma(T [] luvut) {		
		double summa = 0;
		for (T luku : luvut) {
			summa += Double.valueOf(luku.toString());
			//summa += Double.valueOf((String)(T)luku.toString());
		}		
		return summa;
	}
	
	public static <T extends Number> double laskeNumeroSumma(T [] luvut) {		
		double summa = 0;
		for (T luku : luvut) {
			summa += Double.valueOf(luku.toString());
		}		
		return summa;
	}	
	
	public static void main(String [] args) {	
		Integer [] iLuvut = new Integer[10];
		Double [] dLuvut = new Double[10];
		String [] merkit = new String[10];	
		int [] alkeisInt = new int[10];
		
		for (int i = 0; i < 10; i++) {
			iLuvut[i] = Integer.valueOf((i+1)*11);
			dLuvut[i] = Double.valueOf((i+1)*2.5);
			merkit[i] = String.valueOf((i+1)*2);
			alkeisInt[i] = (i+1)*5;
		}		
		
		//merkit[0] ="123Y";
		
		System.out.println(laskeSumma(iLuvut));
		System.out.println(laskeSumma(dLuvut));
		System.out.println(laskeSumma(merkit));
		// Ei ole mahdollista alkeistyyppiselle tiedolle (tässä tapauksessa taulukolle)
		//System.out.println(laskeSumma(alkeisInt));

		System.out.println(laskeNumeroSumma(iLuvut));
		System.out.println(laskeNumeroSumma(dLuvut));
		//System.out.println(laskeNumeroSumma(merkit));
		// Ei ole mahdollista alkeistyyppiselle tiedolle (tässä tapauksessa taulukolle)
		//System.out.println(laskeSumma(alkeisInt));
		
		System.out.println(Arrays.deepToString(iLuvut));
		System.out.println(Arrays.deepToString(dLuvut));
		System.out.println(Arrays.deepToString(merkit));
		System.out.println(Arrays.toString(alkeisInt));
	}
	
//	public static double laskeSumma(Double [] luvut) {
//	
//	double summa = 0;
//	for (double luku : luvut) {
//		summa += luku;
//	}		
//	return summa;
//}
}
