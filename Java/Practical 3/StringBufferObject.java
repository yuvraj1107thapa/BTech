import java.util.*;

public class StringBufferObject {
    public static void main(String[] args) {
        StringBuffer sb = new StringBuffer("HELLO");

        sb.append("java");
        System.out.println("(i) Appended string: " + sb);

        sb.insert(1, "java");
        System.out.println("(ii) Inserted string: " + sb);

        sb.replace(1, 3, "Java");
        System.out.println("(iii) Replaced string: " + sb);

        sb.delete(1, 3);
        System.out.println("(iv) Deleted string: " + sb);

        sb.reverse();
        System.out.println("(v) Reversed string: " + sb);

        String lowerCase = sb.toString().toLowerCase();
        System.out.println("(vi) Lowercase string: " + lowerCase);
    }
}
