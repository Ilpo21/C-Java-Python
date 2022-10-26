package Keronen;

import java.util.ArrayList;
import java.util.List;

public class Drawing {

    public List<ShapeBasic> shapes = new ArrayList<>();

    public Drawing() {
    }

    public void addBasicShape(ShapeBasic shape) {
        shapes.add(shape);
    }

    public List<ShapeBasic> getBasicShapes() {
        return shapes;
    }

    public void draw() {

        if (!shapes.isEmpty()) {
            for (int i = 0; i < shapes.size(); i++) {
                shapes.get(i).draw();
            }
        } else {
            System.out.println("The list is empty!");
        }

    }

    public void grow() {

        if (!shapes.isEmpty()) {
            for (int j = 0; j < shapes.size(); j++) {
                shapes.get(j).grow();
            }
        } else {
            System.out.println("The list is empty!");
        }
    }

    public void showVisibility() {

        String visibility = "";

        if (!shapes.isEmpty()) {

            for (int i = 0; i < shapes.size(); i++) {

                if (shapes.get(i).isVisible()) {
                    visibility = "shape is visible";
                } else {
                    visibility = "shape is in the background";
                }

                System.out.println(i + 1 + ". " + visibility + ": " + shapes.get(i).printText());

            }
        } else {
            System.out.println("The list is empty!");
        }

    }
}
