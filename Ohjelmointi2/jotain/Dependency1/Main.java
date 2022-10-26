package first;

public class Main {

	public static void main(String[] args) {
		
		/*ClassA has an attribute of type ServiceB (aggregation)
		 * If we would need to have several different services
		 * this approach would be complex and create unnecessary
		 * dependencies... 
		 */
		
		ServiceB service = new ServiceB();
		ClassA client = new ClassA(service);		
		System.out.println(client.doSomething());
		
		//We would have to have new constructors/setters for each new service in ClassA...
		ServiceC service2 = new ServiceC();
		//ClassA client2 = new ClassA(service2);		
		//System.out.println(client2.doSomething());

		//We would have to have new constructors/setters for each new service in ClassA...
		ServiceD service3 = new ServiceD();
		//ClassA client3 = new ClassD(service3);		
		//System.out.println(client3.doSomething());
	}
}
