package l10;
    

import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;

public class l10p27 {

    public static void main(String[] args) {
        String filePath = "testout.txt"; 
        try (BufferedReader reader = new BufferedReader(new FileReader(filePath))) {
            String line;
            while ((line = reader.readLine()) != null) {
                System.out.println(line);
            }
        } catch (IOException e) {
            System.err.println("Error: Unable to read the file -> " + filePath);
            System.err.println("Reason: " + e.getMessage());
            System.err.println("Please check if the file exists, is accessible, or is not corrupted.");
}
}
}