package Keronen;

public class AdapterMain {
    public AdapterMain(){

    }
    public static void main(String[] args) throws Exception{

        Drawing drawing = new Drawing();

        Rectangle rectangleOne=new Rectangle();
        Rectangle rectangleTwo=new Rectangle();
        Circle circleOne=new Circle();
        Circle circleTwo=new Circle();
        Rectangle rectangleThree=new Rectangle();

        rectangleOne.changeVisibility();
        drawing.addBasicShape(rectangleOne);
        drawing.addBasicShape(rectangleTwo);
        circleOne.changeVisibility();
        drawing.addBasicShape(circleOne);
        drawing.addBasicShape(circleTwo);
        rectangleThree.changeVisibility();
        drawing.addBasicShape(rectangleThree);

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