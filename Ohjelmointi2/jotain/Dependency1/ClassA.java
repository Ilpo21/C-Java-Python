package first;

//Note that all classes are in one file for the sake of example only.
//Always, always have each class in its own file!

//Adding new services to this class would be cumbersome.
//We would create unnecessary dependencies and complexity with this approach...
public class ClassA {
	
	private ServiceB service;
	//Attributes for different services...
	//private ServiceC service2;
	//private ServiceD service3;
	
	//We would need a constructor/setter for each different type of service...
	public ClassA(ServiceB service) {		
		this.service = service;
	}
	
	//We would need to handle the possible different services somehow... 
	public String doSomething() {
		String info = service.getInfo();
		return info;
	}
}

class ServiceB {
	public String getInfo() {
		return "Service from Service B";
	}
}

class ServiceC {
	public String getInfo() {
		return "Service from Service C";
	}
}

class ServiceD {
	public String getInfo() {
		return "Service from Service D";
	}
}