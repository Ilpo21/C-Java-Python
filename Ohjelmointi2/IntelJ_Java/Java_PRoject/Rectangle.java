package Keronen;

public class Rectangle extends Visibility implements ShapeBasic {

    public Rectangle() {
    }

    @Override
    public void draw() {
        System.out.println("Drawing a rectangle");
    }

    @Override
    public void grow() {
        System.out.println("Growing the size of the rectangle");
    }

    @Override
    public String printText() {
        return "Rectangle";
    }
}
