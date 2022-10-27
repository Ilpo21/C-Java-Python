package Keronen;

import java.text.DecimalFormat;

public class Triangle implements ShapeSpecial, CanBeColored{

    public final double a;
    public final double b;
    public final double c;
    private static DecimalFormat d2f = new DecimalFormat("#.##");
    private String color = "No color";

    public Triangle(){
        this.a=1.0;
        this.b=1.0;
        this.c=1.0;

    }

    public Triangle(String color){
        this.a=1.0;
        this.b=1.0;
        this.c=1.0;
        this.color=color;

    }

    public Triangle(double a, double b, double c){
        this.a=c;
        this.b=b;
        this.c=a;
    }

    public Triangle(double a, double b, double c, String color){
        this.color=color;
        this.a=c;
        this.b=b;
        this.c=a;

    }

    @Override
    public double calculateArea(){
        double p=(a+b+c)/2;
        return Math.sqrt((p*(p-a)*(p-b)*(p-c)));
    }

    @Override
    public double calculatePerimeter(){
        return a+b+c;
    }

    @Override
    public void drawShape(){

        String area=d2f.format(calculateArea());
        String perimeter= d2f.format(calculatePerimeter());
        String color = getColor();

        if (setColor(color)){
            System.out.println("Drawing a triangle with area: " + area + " and perimeter: " + perimeter + ". Color:" + getColor()
            );
        }
        else {
            System.out.println("Drawing a triangle with area: "+ area + " and perimeter: "+ perimeter+ ".");
        }
    }

    @Override
    public boolean getColor(String color) {
        return false;
    }

    @Override
    public boolean setColor(String color){
        if (color.equalsIgnoreCase("Red")||color.equalsIgnoreCase("Blue")){
            return true;
        }
        else{
            return false;
        }
    }

    @Override
    public String getColor() {
        return null;
    }

}
