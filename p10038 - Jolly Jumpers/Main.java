import java.util.*;

public class Main {

    public static void main(String args[]) {

        Scanner scan = new Scanner(System.in);

        boolean isJolly;

        while(scan.hasNext()) {

            isJolly = true;

            int n = scan.nextInt();
            int[] arr = new int[n];
            
            int[] jolly = new int[n];
            Arrays.fill(jolly, 0);
    
            for (int i = 0; i < n; i++) {
                arr[i] = scan.nextInt();
            }
    
            for (int i = 0; i < n-1; i++) {

                int diff;
                if ((arr[i] >= 0 && arr[i+1] >= 0) || (arr[i] < 0 && arr[i+1] < 0)) {
                    diff = Math.abs(Math.abs(arr[i])-Math.abs(arr[i+1]));
                } else {
                    diff = Math.abs(Math.abs(arr[i])+Math.abs(arr[i+1]));
                }

                if (diff >= n) {
                    jolly[1] = 0;
                    break;
                }
                jolly[diff] = 1;
            }
    
            for (int i = 1; i <= n-1; i++) {
                if (jolly[i] == 0) {
                    isJolly = false;
                    break;
                }
            }

            String result = isJolly == true ? "Jolly" : "Not jolly";

            System.out.println(result);
        }

        scan.close();
    }
}

