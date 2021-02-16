import java.util.Scanner;
class twostones {
    public static void main(String[] args) {
        Scanner kbd = new Scanner(System.in);
        int N = kbd.nextInt();
        String a = "Alice", b = "Bob";
        if (N > 0 && N < 10000000)
            System.out.print((N%2!=0) ? a: b);
        kbd.close();
    }
}