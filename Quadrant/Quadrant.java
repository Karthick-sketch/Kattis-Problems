import java.util.Scanner; 
class Quadrant {
  public static void main(String args[]) {
    Scanner kbd = new Scanner(System.in);
    int x = kbd.nextInt();
    int y = kbd.nextInt();
    if (x > 0 && y > 0)
	    System.out.print(1);
    else if (x < 0 && y > 0)
	    System.out.print(2);
    else if (x < 0 && y < 0)
	    System.out.print(3);
    else if (x > 0 && y < 0)
	    System.out.print(4);
    kbd.close();
  }
}