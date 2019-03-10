import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;
import java.util.Vector;

public class Solution {

    public static int searchItem(Vector<Integer> vector, int start, int end, int key) {

        for (int i = start; i <= end; i++) {
            if (key == vector.get(i)) {
                return i;
            }
        }

        return -1;
    }

    public static void main(String[] args) {
        
        Scanner scan = new Scanner(System.in);

        Vector<Integer> prices;

        int cases = 0;

        while (scan.hasNext()) {

            String input = scan.nextLine();

            if (!input.isEmpty()) {

                String[] values = input.split(" ");

                int num = Integer.parseInt(values[0]);
                int query = Integer.parseInt(values[1]);
    
                if (num == 0 && query == 0) {
                    break;
                }
    
                prices = new Vector<>();
    
                int i = 0;
                while (i < num) {
                    String str = scan.nextLine();
    
                    if (!str.isEmpty()) {
                        int value = Integer.parseInt(str);
                        prices.add(value);
    
                        i++;
                    }
                }
    
                Collections.sort(prices, new Comparator<Integer>() {
                    @Override
                    public int compare(Integer a, Integer b) {
                        return a.compareTo(b);
                    }
                });
                
                ++cases;
                System.out.println("CASE# "+ cases +":");
    
                int j = 0;
                while (j < query) {
                    String str = scan.nextLine();
    
                    if (!str.isEmpty()) {
                        int key = Integer.parseInt(str);
                    
                        int index = searchItem(prices, 0, num-1, key);
        
                        if (index == -1) {
                            System.out.println(key + " not found");
                        } else {
                            System.out.println(key + " found at " + (index+1));
                        }
                        
                        j++;
                    }
                }
                
                prices.clear();
            }
        }

        scan.close();
    }
}
