public class SystemExample {
  public static void main(String[] args) {
    // Mencetak teks ke console
    System.out.println("Hello, World!");

    // Mendapatkan waktu sistem saat ini (dalam milisecond)
    long currentTime = System.currentTimeMillis();
    System.out.println("Current time in milliseconds: " + currentTime);

    // Menyalin array
    int[] numbers = {1, 2, 3, 4, 5};
    int[] copy = new int[numbers.length];
    System.arraycopy(numbers, 0, copy, 0, numbers.length);
    System.out.println("Array copy: " + Arrays.toString(copy));

    // Keluar dari program
    System.exit(0);
  }
}
