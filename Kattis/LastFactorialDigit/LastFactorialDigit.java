import java.util.Scanner; 
class LastFactorialDigit {

  public static int fact(int num) {
    if (num == 1)
      return num;
    else
      return num * fact(num-1);
  }

  public static void main(String args[]) {
    Scanner kbd = new Scanner(System.in);
    int n = kbd.nextInt();
    int[] arr = new int[n];
    for (int i = 0;i < n;i++) {
      arr[i] = kbd.nextInt();
      arr[i] = fact(arr[i]);
    }

    for (int i = 0;i < n;i++)
      System.out.println(arr[i] % 10);
 
    kbd.close();
  }
}