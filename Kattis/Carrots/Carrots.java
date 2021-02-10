import java.util.*;
class Carrots {
  public static void main(String[] args) {
    Scanner kbd = new Scanner(System.in);
    int n = kbd.nextInt();
    int p = kbd.nextInt();
    if (n >= 1 && n <= 1000 && p >= 1 && p <= 1000) {
	    for (int i = 0;i <= n;i++)
        kbd.nextLine();
	    System.out.print(p);
    }
    kbd.close();
  }
}