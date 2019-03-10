import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;
import java.util.Vector;

public class Main {

    public static int checkPreviousIndex(Vector<Integer> vector, int index, int key) {

        if (index == 0) {
            return 0;
        }

        if (vector.get(index) != key) {
            return index+1;
        }

        return checkPreviousIndex(vector, index-1, key);
    }

    public static int binarySearch(Vector<Integer> vector, int start, int end, int key) {

        if (start <= end) {
            int mid = start + (end-start) / 2;

            if (vector.get(mid) == key) {

                return mid;
            }

            if (key < vector.get(mid)) {
                return binarySearch(vector, 0, mid-1, key);
            }
            
            return binarySearch(vector, mid+1, end, key);
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
                    
                        int index = binarySearch(prices, 0, num-1, key);
        
                        if (index == -1) {
                            System.out.println(key + " not found");
                        } else {

                            if (index != 0) {
                                int updatedIndex = checkPreviousIndex(prices, index-1, key);
                                System.out.println(key + " found at " + (updatedIndex+1));
                            } else {
                                System.out.println(key + " found at 1");
                            }
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
