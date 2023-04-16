import java.util.*;

public class WordLength {
    public static void main(String[] args) {

        String sentence = "Java is a programming language";
        // String sentence = "India is my nation";

        int maxLength = 0;
        String longestWord = "";

        String word = "";
        for (int i = 0; i < sentence.length(); i++) {
            char ch = sentence.charAt(i);
            if (ch != ' ') {
                word += ch;
            } else {
                if (word.length() > maxLength) {
                    maxLength = word.length();
                    longestWord = word;
                }
                word = "";
            }
        }

        if (word.length() > maxLength) {
            maxLength = word.length();
            longestWord = word;
        }

        System.out.println("The longest word is '" + longestWord + "' with length " + maxLength);
    }
    
}
