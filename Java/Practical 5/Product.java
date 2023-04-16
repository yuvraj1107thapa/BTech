import java.util.*;

public class Product {
    String name;
    int code;
    double amount;

    Product(String n, int c, double p) {
        name = n;
        code = c;
        amount = p;
    }



    void show() {
        System.out.println("Name: " + name);
        System.out.println("Code: " + code);
        System.out.println("Amount: " + amount);
    }
    public static void main(String[] args) {
        Sales sales = new Sales("Product1", 123, 100.0, 40);
        sales.compute();
        sales.show();
    }
}
class Sales extends Product {
    int day;
    double tax;
    double totamt;
    Sales(String n, int c, double p, int d) {
        super(n, c, p);
        day = d;
    }
    void compute() {
        double saleamt = amount;
        double servicetax = saleamt * 0.124;
        double fine = 0;
        if (day > 30) { fine = saleamt * 0.025; }
        totamt = saleamt + servicetax + fine;
    }
    void show() {
        super.show();
        System.out.println("Day: " + day);
        System.out.println("Service Tax: " + (amount * 0.124));
        System.out.println("Total Amount: " + totamt);
    }
}
