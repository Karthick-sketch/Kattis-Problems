import java.util.Scanner; 
class QALY {
  public static void main(String args[]) {
    Scanner kbd = new Scanner(System.in);
    int n = kbd.nextInt();
    if (n >= 1 && n <= 100) {
	    double qaly = 0;
	    for (int i = 0;i < n;i++) {
        double x = kbd.nextDouble();
        double y = kbd.nextDouble();
        if (x > 0 && x <= 1 && y > 0 && y <= 100)
          qaly += x * y;
      }
      System.out.print(qaly);
    }
    kbd.close();
  }
}