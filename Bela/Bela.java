import java.util.*; 
class Bela {
  public static void main(String args[]) {
    Scanner kbd = new Scanner(System.in);
    HashMap<Character, Integer> dominant = new HashMap<Character, Integer>();
    HashMap<Character, Integer> notDominant = new HashMap<Character, Integer>();

    dominant.put('A', 11);
    dominant.put('K', 4);
    dominant.put('Q', 3);
    dominant.put('J', 20);
    dominant.put('T', 10);
    dominant.put('9', 14);
    dominant.put('8', 0);
    dominant.put('7', 0);

    notDominant.put('A', 11);
    notDominant.put('K', 4);
    notDominant.put('Q', 3);
    notDominant.put('J', 2);
    notDominant.put('T', 10);
    notDominant.put('9', 0);
    notDominant.put('8', 0);
    notDominant.put('7', 0);

    int n = kbd.nextInt();
    char b = kbd.next().charAt(0);
    int points = 0;

    for (int i = 0;i < n;i++) {
      for (int j = 0;j < 4;j++) {
        String ip = kbd.next();
        if (ip.charAt(1) == b)
          points += dominant.get(ip.charAt(0));
        else
          points += notDominant.get(ip.charAt(0));
      }
    }
    System.out.print(points);
    kbd.close();
  }
}
