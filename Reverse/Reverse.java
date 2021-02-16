import java.util.Scanner;
public class Reverse {
    public static void main(String[] args) {
        Scanner kbd = new Scanner(System.in);
        int n = kbd.nextInt();
        int[] arr = new int[n];

        for (int i = 0;i < n;i++)
            arr[i] = kbd.nextInt();

        for (int i = 0;i < n/2;i++) {
            int temp = arr[i];
            arr[i] = arr[n-i-1];
            arr[n-i-1] = temp;
        }

        for (int i = 0;i < n;i++)
            System.out.println(arr[i]);

        kbd.close();
    }
}
