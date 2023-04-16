import java.util.*;

public class StringFunctions {
    public static void main(String[] args) {
        String str = "Java";

        String concatenated = "Welcome" + str;
        System.out.println("(i) Concatenated string: " + concatenated);

        int i = 2;
        char ch = str.charAt(i);
        System.out.println("(ii) Character at index " + i + ": " + ch);

        int firstIndex = str.indexOf("a");
        System.out.println("(iii) Index of first \"a\": " + firstIndex);

        String str2 = "JAVA";
        int comparisonResult = str.compareTo(str2);
        System.out.println("(iv) Comparison result (Java vs. JAVA): " + comparisonResult);

        int comparisonResultIgnoreCase = str.compareToIgnoreCase(str2);
        System.out.println("(v) Comparison result (Java vs. JAVA) ignoring case: " + comparisonResultIgnoreCase);

        int lastIndex = str.lastIndexOf("a");
        System.out.println("(vi) Index of last \"a\": " + lastIndex);
    }
}
