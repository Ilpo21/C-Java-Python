public class Omena extends Hedelma {

	/* Huomaa override notaation käyttö => auttaa huomaamaan mahdolliset mokat...
	 */
	@Override
	public void setKilohinta(double kilohinta) {
		super.setKilohinta(kilohinta*2);
	}

}
