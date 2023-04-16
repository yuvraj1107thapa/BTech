import java.util.Scanner;

public class BankAccount {
    private String name;
    private long accountNumber;
    private double balance;
    
    public BankAccount(String name, long accountNumber, double balance) {
        this.name = name;
        this.accountNumber = accountNumber;
        this.balance = balance;
    }
    
    public static void deposit(BankAccount account, double amount) {
        account.balance += amount;
        System.out.println("Deposit of " + amount + " successful.");
        displayBalance(account);
    }

    public static void withdraw(BankAccount account, double amount) {
        if (account.balance >= amount) {
            account.balance -= amount;
            System.out.println("Withdrawal of " + amount + " successful.");
            displayBalance(account);
        } else {
            System.out.println("Insufficient balance.");
            displayBalance(account);
        }
    }
    public static void displayBalance(BankAccount account) {
        System.out.println("Current balance: " + account.balance);
    }
    
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter your name: ");
        String name = scanner.nextLine();
        System.out.print("Enter your account number: ");
        long accountNumber = scanner.nextLong();
        System.out.print("Enter your initial balance: ");
        double balance = scanner.nextDouble();
        BankAccount account = new BankAccount(name, accountNumber, balance);
        System.out.println("Account created successfully.");
        while (true) {
            System.out.println("Choose an option:\n1. Deposit\n2. Withdraw\n3. Display balance\n4. Exit");
            int choice = scanner.nextInt();
            switch (choice) {
                case 1:
                    System.out.print("Enter amount to deposit: ");
                    double depositAmount = scanner.nextDouble();
                    deposit(account, depositAmount);
                    break;
                case 2:
                    System.out.print("Enter amount to withdraw: ");
                    double withdrawAmount = scanner.nextDouble();
                    withdraw(account, withdrawAmount);
                    break;
                case 3:
                    displayBalance(account);
                    break;
                case 4:
                    System.out.println("Exiting program.");
                    System.exit(0);
                default:
                    System.out.println("Invalid choice.");
            }
        }
    }
}