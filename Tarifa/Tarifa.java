import java.util.Scanner;
class Tarifa {
  public static void main(String[] args) {
    Scanner kbd = new Scanner(System.in);
    int gb = kbd.nextInt();
    if (gb >= 1 && gb <= 100) {
      int month = kbd.nextInt();
      if (month >= 1 && month <= 100) {
        int tot = gb;
        for (int i = 0;i < month;i++) {
          int p = kbd.nextInt();
          tot = (gb+tot)-p;
        }
        System.out.print(tot);
      }
    }
    kbd.close();
  }
}