import java.io.BufferedWriter;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileWriter;
import java.util.Scanner;

public class Update {
  public static void main(String[] args) {
    try {
      File file = new File("existingfile.txt");
      Scanner scan = new Scanner(file);
      String content = "";
      while (scan.hasNextLine()) {
        content += scan.nextLine() + "\n";
      }
      scan.close();

      content += "new line\n";

      FileWriter writer = new FileWriter(file);
      BufferedWriter buffer = new BufferedWriter(writer);
      buffer.write(content);
      buffer.close();
      System.out.println("File updated: " + file.getName());
    } catch (FileNotFoundException e) {
      System.out.println("File not found.");
      e.printStackTrace();
    } catch (Exception e) {
      System.out.println("An error occurred.");
      e.printStackTrace();
    }
  }
}
