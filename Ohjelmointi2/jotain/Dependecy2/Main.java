package second;

public class Main {

	public static void main(String[] args) {
		
		//Adding ServiceB...
		Service service = new ServiceB();
		ClassA client = new ClassA(service);		
		System.out.println(client.doSomething());
		
		//Adding ServiceC...
		Service service2 = new ServiceC();
		client = new ClassA(service2);		
		System.out.println(client.doSomething());
		
		//Adding serviceD
		Service service3 = new ServiceD();
		client = new ClassA(service3);		
		System.out.println(client.doSomething());
	}
}
