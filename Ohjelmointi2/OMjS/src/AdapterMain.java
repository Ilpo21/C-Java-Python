package Keronen;


public class AdapterMain {
    public AdapterMain(){

    }
    public static void main(String[] args) throws Exception{

        Drawing drawing = new Drawing();

        Rectangle rectangleOne=new Rectangle();
        Rectangle rectangleTwo=new Rectangle();
        Circle circleOne=new Circle();
        Triangle triangleOne=new Triangle(1.0,1.0,1.0,"Red");
        Triangle triangleTwo =new Triangle(1.0,1.0,1.0,"Blue");
        ShapeDiamond diamondOne=new ShapeDiamond(1.0,1.0,"Blue");
        ShapeDiamond diamondTwo=new ShapeDiamond(1.0,1.0,"Red");
        BrushStroke brushStrokeOne=new BrushStroke();
        BrushStroke brushStrokeTwo=new BrushStroke();

        ShapeAdapter adapterOne= new ShapeAdapter(triangleOne);
        ShapeAdapter adapterTwo= new ShapeAdapter(diamondOne);
        ShapeAdapter adapterThree= new ShapeAdapter(diamondTwo);
        ShapeAdapter adapterFour= new ShapeAdapter(triangleTwo);


        rectangleOne.changeVisibility();
        drawing.addBasicShape(rectangleOne);
        drawing.addBasicShape(rectangleTwo);
        drawing.addBasicShape(circleOne);
        adapterOne.changeVisibility();
        drawing.addBasicShape(adapterOne);
        adapterTwo.changeVisibility();
        drawing.addBasicShape(adapterTwo);
        drawing.addBasicShape(adapterThree);
        drawing.addBasicShape(adapterFour);
        drawing.addBasicShape(brushStrokeOne);
        brushStrokeTwo.changeVisibility();
        drawing.addBasicShape(brushStrokeTwo);

        //Juttuja
        drawing.draw();

        System.out.println();

        //Juttuja
        drawing.grow();

        System.out.println();

        //Juttuja
        drawing.showVisibility();


    }
}