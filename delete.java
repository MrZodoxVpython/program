import java.io.File;

public class Delete {
  public static void main(String[] args) {
    try {
      File file = new File("existingfile.txt");
      if (file.delete()) {
        System.out.println("File deleted: " + file.getName());
      } else {
        System.out.println("File does not exist.");
      }
    } catch (Exception e) {
      System.out.println("An error occurred.");
      e.printStackTrace();
    }
  }
}
