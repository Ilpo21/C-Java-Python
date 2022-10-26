package second;

// Dependency injection...

public class ClassA implements Client {
	
	/* Note that the client has an attribute of type Service (interface)
	 * Now, the object can be of any class implementing the Service...
	 * If we needed a setter/getter, just one would do (for all different services).
	 */
	private Service service;
	
	public ClassA(Service service) {	
		this.service = service;
	}
	
	public String doSomething() {
		String info = service.getInfo();
		return info;
	}
}

class ServiceB implements Service {

	@Override
	public String getInfo() {
		return "Service from Service B";
	}
}

class ServiceC implements Service {
	
	@Override
	public String getInfo() {
		return "Service from Service C";
	}
}

class ServiceD implements Service {
	
	@Override
	public String getInfo() {
		return "Service from Service D";
	}
}