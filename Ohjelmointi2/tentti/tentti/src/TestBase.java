public class TestBase {

    public static void main(String[] args) {

        DerivedClass1 myDerived = new DerivedClass2();
        System.out.println("Lovely day today!");
        myDerived.printMe();
    }
}