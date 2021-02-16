import java.util.Scanner; 
class Cetvtra {
  public static void main(String args[]) {
    Scanner kbd = new Scanner(System.in);
    int[] l1 = new int[2];
    l1[0] = kbd.nextInt();  l1[1] = kbd.nextInt();
    int[] l2 = new int[2];
    l2[0] = kbd.nextInt();  l2[1] = kbd.nextInt();
    int[] l3 = new int[2];
    l3[0] = kbd.nextInt();  l3[1] = kbd.nextInt();

    int[] l4 = new int[2];
    if (l1[0] == l2[0])
      l4[0] = l3[0];
    else if (l1[0] == l3[0])
      l4[0] = l2[0];
    else if (l2[0] == l3[0])
      l4[0] = l1[0];

    if (l1[1] == l2[1])
      l4[1] = l3[1];
    else if (l1[1] == l3[1])
      l4[1] = l2[1];
    else if (l2[1] == l3[1])
      l4[1] = l1[1];

    System.out.print(l4[0] + " " + l4[1]);
    kbd.close();
  }
}