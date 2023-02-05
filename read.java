import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class Read {
  public static void main(String[] args) {
    try {
      File file = new File("existingfile.txt");
      Scanner scan = new Scanner(file);
      while (scan.hasNextLine()) {
        String line = scan.nextLine();
        System.out.println(line);
      }
      scan.close();
    } catch (FileNotFoundException e) {
      System.out.println("File not found.");
      e.printStackTrace();
    }
  }
}
