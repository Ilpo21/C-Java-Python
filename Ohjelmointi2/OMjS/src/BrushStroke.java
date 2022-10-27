package Keronen;

public class BrushStroke extends Visibility implements ShapeBasic{
    public BrushStroke(){

    }
    @Override
    public void draw(){
        System.out.println("Drawing a brush stroke");
    }

    @Override
    public void grow(){
        System.out.println("Adding some color...");
    }

    @Override
    public String printText(){
        return "Brush Stroke";
    }

}
