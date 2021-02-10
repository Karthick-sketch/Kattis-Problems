import java.util.*;
class Rtwo {
    public static void main(String[] args) {
        Scanner kbd = new Scanner(System.in);
        int R1 = kbd.nextInt();
        int S = kbd.nextInt();
        if (R1 >= -1000 && R1 <= 1000 && S >= -1000 && S <= 1000)
            System.out.print(2*S-R1);
    }
}