public class Circle{
    double radius;
    String color;

    public Circle(double radius, String color){
        this.radius = radius;
        this.color = color;
    }

    // Default constructor or No argument constructor
    public Circle(){
        this.radius = 1.0;
        this.color = "RED";
    }

    public double getArea(){
        return radius * radius * 3.1416;
    }
}