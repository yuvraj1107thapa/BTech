public public class Shape {
    public double area() {
        return 0.0;
    }

    public double area(int side) {
        return side * side;
    }

    public double area(double length, double width) {
        return length * width;
    }

    public double area(double radius) {
        return Math.PI * radius * radius;
    }
    public static void main(String[] args) {
        Shape shape = new Shape();
        double squareArea = shape.area(5.0);
        System.out.println("Area of square: " + squareArea);
        double rectangleArea = shape.area(5.0, 10.0);
        System.out.println("Area of rectangle: " + rectangleArea);
        double circleArea = shape.area(5);
        System.out.println("Area of circle: " + circleArea);
    }

}

 {
    
}
