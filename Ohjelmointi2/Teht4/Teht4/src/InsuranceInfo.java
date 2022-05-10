public class InsuranceInfo {

    private Property property;
    private double insuranceInfo;

    public InsuranceInfo(Property property, double insuranceInfo){
this.property= property;
this.insuranceInfo=insuranceInfo;

    }

    public Property getProperty() {
        return this.property;
    }

    public void setProperty(Property property) {
        this.property = property;
    }

    public double getInsuranceInfo() {
        return this.insuranceInfo;
    }

    public void setInsuranceInfo(double insuranceInfo) {
        this.insuranceInfo = insuranceInfo;
    }

    public String toString(){
        return property + " Insurance Info =" + insuranceInfo + "\n";

    }
    
}
