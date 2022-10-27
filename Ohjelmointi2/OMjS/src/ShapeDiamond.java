package Keronen;

import java.text.DecimalFormat;

public class ShapeDiamond implements ShapeSpecial, CanBeColored{

    private final double a;
    private final double b;
    private static DecimalFormat d2f = new DecimalFormat("#.##");
    private String color = "No color";

    public ShapeDiamond(){
        this.a=1.0;
        this.b=1.0;


    }

    public ShapeDiamond(String color){
        this.a=1.0;
        this.b=1.0;
        this.color=color;

    }

    public ShapeDiamond(double a, double b){
        this.a=a;
        this.b=a;

    }

    public ShapeDiamond(double a, double b, String color){
        this.color=color;
        this.a=a;
        this.b=b;

    }

    @Override
    public double calculateArea(){
        return a*b;
    }

    @Override
    public double calculatePerimeter(){
        return (2*a)+(2*b);
    }

    @Override
    public void drawShape(){

        String area=d2f.format(calculateArea());
        String perimeter= d2f.format(calculatePerimeter());
        String color = getColor();

        if (setColor(color)){
            System.out.println("Drawing a diamond with area: " + area + " and perimeter: " + perimeter + ". Color:" + getColor()
            );
        }
        else {
            System.out.println("Drawing a diamond with area: "+ area + " and perimeter: "+ perimeter+ ".");
        }
    }


    @Override
    public boolean getColor(String color) {
        if (color.equalsIgnoreCase("Red")||color.equalsIgnoreCase("Blue")){
            return true;
        }
        else{
            return false;
        }
    }


    @Override
    public boolean setColor(String color) {
        return false;
    }

    @Override
    public String getColor() {
        return null;
    }
}
