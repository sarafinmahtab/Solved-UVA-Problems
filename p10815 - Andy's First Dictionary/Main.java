import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) throws IOException {
        
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        String line;

        SortedSet<String> set = new TreeSet<>();

        while ((line = br.readLine()) != null) {

            String[] str = line.split("(\\W+|\\d+)+");
            
            for (int i = 0; i < str.length; i++) {

                String word = str[i].toLowerCase();
                if (!word.isEmpty()) {
                    set.add(word);
                }
            }
        }

        Iterator<String> it = set.iterator();

        while(it.hasNext()) {
            System.out.println(it.next().toString());
        }
    }
}
