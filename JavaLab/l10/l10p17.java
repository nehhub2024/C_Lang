package l10;

import java.io.PrintStream;
import java.io.FileOutputStream;
import java.io.IOException;

public class l10p17 {
    

    public static void main(String[] args) {
        String filePath = "testout.txt"; 
        try (PrintStream printStream = new PrintStream(new FileOutputStream(filePath))) {
            printStream.println("Hello, World!");
            System.out.println("Message written to " + filePath);
        } catch (IOException e) {
            System.err.println("Error writing to file: " + e.getMessage());
 }
    }
}