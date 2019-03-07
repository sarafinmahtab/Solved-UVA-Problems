import java.io.*;
import java.util.*;

public class Main {

    public static String sortSequence(String str) {

        char[] charArray = str.toCharArray();

        Arrays.sort(charArray);

        return String.valueOf(charArray);
    }

    public static void main(String args[]) throws IOException {

        BufferedReader reader = new   BufferedReader(new InputStreamReader(System.in));
        StringBuffer stringBuffer = new StringBuffer("");

        String str1;
        String str2;
        
        String matchedString;

        while((str1 = reader.readLine()) != null) {

            str2 = reader.readLine();

            matchedString = "";

            if (str1.length() < str2.length()) {
                for (int i = 0; i < str1.length(); i++) {

                    if (str2.charAt(i) >= 65 && str2.charAt(i) <= 90) {
                        continue;
                    }

                    CharSequence ch = String.valueOf(str1.charAt(i));
    
                    if (str2.contains(ch)) {
                        matchedString += ch;
                    }
                }    
            } else {
                for (int i = 0; i < str2.length(); i++) {

                    if (str2.charAt(i) >= 65 && str2.charAt(i) <= 90) {
                        continue;
                    }

                    CharSequence ch = String.valueOf(str2.charAt(i));
    
                    if (str1.contains(ch)) {
                        matchedString += ch;
                    }
                } 
            }

            matchedString = sortSequence(matchedString);

            System.out.println(matchedString);
        }
    }
}
