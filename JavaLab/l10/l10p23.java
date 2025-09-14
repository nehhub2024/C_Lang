package l10;

import java.io.IOException;
import java.io.RandomAccessFile;


public class l10p23 {
    

    public static void main(String[] args) {
        String filePath = "numbers.dat"; 
        try (RandomAccessFile file = new RandomAccessFile(filePath, "rw")) {
            System.out.println("Writing numbers to file:");
            for (int i = 1; i <= 5; i++) {
                file.writeInt(i * 10); 
                System.out.println("Written: " + (i * 10));
            }
        } catch (IOException e) {
            System.err.println("Error writing to file: " + e.getMessage());
        }
        try (RandomAccessFile file = new RandomAccessFile(filePath, "r")) {
            System.out.println("\nReading numbers from file:");
            while (file.getFilePointer() < file.length()) {
                int number = file.readInt();
                System.out.println("Read: " + number);
            }
        } catch (IOException e) {
            System.err.println("Error reading file: " + e.getMessage());
 }
}
}
