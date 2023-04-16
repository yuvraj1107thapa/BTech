import java.util.*;

public class Student {
    private int id;
    private String name;
    private String branch;
    private String university;
    
    // Non-static method to set the details of a student
    public void setDetails(int id, String name, String branch, String university) {
        this.id = id;
        this.name = name;
        this.branch = branch;
        this.university = university;
    }
    
    // Non-static method to get the details of a student
    public void getDetails() {
        System.out.println("ID: " + id);
        System.out.println("Name: " + name);
        System.out.println("Branch: " + branch);
        System.out.println("University: " + university);
    }

    public static void main(String[] args) {
        Student s1 = new Student();
        s1.setDetails(101, "Yuvraj Thapa", "Computer Science", "Graphic Era University");
        s1.getDetails();
    }
}
