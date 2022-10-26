package Keronen;

public class AdapterMain {

    public AdapterMain() {
    }

    public static void main(String[] args) throws Exception {

        Drawing drawing = new Drawing();

        Rectangle rectangle1 = new Rectangle();
        Rectangle rectangle2 = new Rectangle();
        Circle circle1 = new Circle();
        Triangle triangle1 = new Triangle(1.0, 1.0, 1.0, "Red");
        Triangle triangle2 = new Triangle(1.0, 1.0, 1.0, "Blue");
        ShapeDiamond diamond1 = new ShapeDiamond(1.0, 1.0, "Blue");
        ShapeDiamond diamond2 = new ShapeDiamond(1.0, 1.0, "Red");
        BrushStroke brushStroke1 = new BrushStroke();
        BrushStroke brushStroke2 = new BrushStroke();

        ShapeAdapter adapter1 = new ShapeAdapter(triangle1);
        ShapeAdapter adapter2 = new ShapeAdapter(diamond1);
        ShapeAdapter adapter3 = new ShapeAdapter(diamond2);
        ShapeAdapter adapter4 = new ShapeAdapter(triangle2);

        rectangle1.changeVisibility();
        drawing.addBasicShape(rectangle1);
        drawing.addBasicShape(rectangle2);
        drawing.addBasicShape(circle1);
        adapter1.changeVisibility();
        drawing.addBasicShape(adapter1);
        adapter2.changeVisibility();
        drawing.addBasicShape(adapter2);
        drawing.addBasicShape(adapter3);
        drawing.addBasicShape(adapter4);
        drawing.addBasicShape(brushStroke1);
        brushStroke2.changeVisibility();
        drawing.addBasicShape(brushStroke2);

        // -----------
        drawing.draw();

        System.out.println();

        // -----------
        drawing.grow();

        System.out.println();

        // -----------
        drawing.showVisibility();

    }
}
