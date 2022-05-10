import java.util.ArrayList;

public class InsInfoContainer {
    private ArrayList<InsuranceInfo> insuranceInfo = new ArrayList<>();
    InsuranceInfo info;

    public InsInfoContainer(InsuranceInfo info){
insuranceInfo = new ArrayList<>();

    }
public void print(){
    for (int i=0; i<insuranceInfo.size(); i++)
    System.out.println(insuranceInfo.get(i));
}


public void addInfo(InsuranceInfo i1) {
    insuranceInfo.add(i1);
}



public void printLarge(double limit){
for (int i=0; i< insuranceInfo.size();i++){
    if(insuranceInfo.get(i).getInsuranceInfo()>limit){
        System.out.println((insuranceInfo.get(i)));
    }
}

}
public void printSmall(double limit1){
    for(int i=0; i<insuranceInfo.size();i++){
        if(insuranceInfo.get(i).getInsuranceInfo()<limit1){
System.out.println(insuranceInfo.get(i));
        }
    }
}





}

