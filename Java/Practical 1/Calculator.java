import java.util.Scanner;

public class Calculator {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        char operator;
        double number1, number2, result;

        System.out.print("Enter operator (+, -, *, /, %) or '?' to exit: ");
        operator = input.next().charAt(0);

        while (operator != '?') {
            System.out.print("Enter first number: ");
            number1 = input.nextDouble();

            System.out.print("Enter second number: ");
            number2 = input.nextDouble();

            switch(operator) {
                case '+':
                    result = number1 + number2;
                    System.out.println(number1 + " + " + number2 + " = " + result);
                    break;
                case '-':
                    result = number1 - number2;
                    System.out.println(number1 + " - " + number2 + " = " + result);
                    break;
                case '*':
                    result = number1 * number2;
                    System.out.println(number1 + " * " + number2 + " = " + result);
                    break;
                case '/':
                    if (number2 == 0) {
                        System.out.println("Cannot divide by zero");
                    } else {
                        result = number1 / number2;
                        System.out.println(number1 + " / " + number2 + " = " + result);
                    }
                    break;
                case '%':
                    result = number1 % number2;
                    System.out.println(number1 + " % " + number2 + " = " + result);
                    break;
                default:
                    System.out.println("Invalid operator");
                    break;
            }

            System.out.print("Enter operator (+, -, *, /, %) or '?' to exit: ");
            operator = input.next().charAt(0);
        }

        System.out.println("Calculator stopped");
    }
}
