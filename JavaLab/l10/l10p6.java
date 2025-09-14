package l10;

import java.io.FileReader;
import java.io.IOException;

public class l10p6 {
    public static void main(String[] args) {
        String filePath = "testout.txt"; 

        try (FileReader fileReader = new FileReader(filePath)) {
            int character;
            while ((character = fileReader.read()) != -1) {
                System.out.print((char) character); 
            }
            System.out.println("\nFile reading completed successfully!");

        } catch (IOException e) {
            System.err.println("Error reading file: " + e.getMessage());
        }
    }
}