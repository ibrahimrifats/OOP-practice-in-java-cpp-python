public class Cylinder extends Circle{
    double height;

    public Cylinder(){
        this.height = 1.0;
    }

    public Cylinder(double radius, String color, double height){
        super(radius, color);
        this.height = height;
    }

    @Override
    public double getArea(){
        double area = 2 * 3.1416 * radius * height +  2 * super.getArea();
        return area;
    }
}