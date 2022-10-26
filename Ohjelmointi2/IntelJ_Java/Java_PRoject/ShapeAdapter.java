package Heatta;

public class ShapeAdapter extends Visibility implements ShapeBasic {

    private ShapeSpecial shape = null;

    public ShapeAdapter(ShapeSpecial shape) {
        this.shape = shape;
    }

    @Override
    public void draw() {
        shape.drawShape();
    }

    @Override
    public void grow() {
        System.out.println(printText() + ", cannot grow");
    }

    @Override
    public String printText() {
        if (shape instanceof Triangle) {
            return "Triangle";
        } else if (shape instanceof ShapeDiamond) {
            return "ShapeDiamond";
        } else {
            return "Wrong kind of shape - not supported";
        }

    }

}
