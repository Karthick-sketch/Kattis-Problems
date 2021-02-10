import java.util.Scanner;
class GrassSeedInc {
    public static void main(String args[ ]) {
        Scanner kbd = new Scanner(System.in);
        double C, w, l, sow = 0.0;
        C = kbd.nextDouble();
        int L = kbd.nextInt();
        if (C > 0 && C <= 100 && L > 0 && L <= 100) {
            for (int i = 1;i <= L;i++) {
                w = kbd.nextDouble();
                l = kbd.nextDouble();
                sow += w*l*C;
            }
            System.out.print(sow);
        }
        kbd.close();
    }
}