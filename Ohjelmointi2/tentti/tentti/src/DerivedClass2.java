class DerivedClass2 extends DerivedClass1 {
    static {
        System.out.println("How are you today?");
    }

    public DerivedClass2() {
        System.out.println("Hello from DerivedClass2");
    }

    public void printMe() {
        System.out.println("Bye now from DerivedClass2!");
    }
}