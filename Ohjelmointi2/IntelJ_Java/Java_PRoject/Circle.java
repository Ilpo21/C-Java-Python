package Keronen;

public class Circle extends Visibility implements ShapeBasic {

    public Circle() {
    }

    @Override
    public void draw() {
        System.out.println("Drawing a circle");
    }

    @Override
    public void grow() {
        System.out.println("Growing the size of the circle");
    }

    @Override
    public String printText() {
        return "Circle";
    }

}
