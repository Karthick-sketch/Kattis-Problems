import java.util.Scanner;
class StuckInATimeLoop {
    public static void main(String[] args) {
        Scanner kbd = new Scanner(System.in);
        int N = kbd.nextInt();
        if (N >= 1 && N <= 100) {
            for (int i = 1;i <= N;i++)
                System.out.println(i + " Abracadabra");
        }
    }
}