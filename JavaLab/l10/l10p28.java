package l10;

import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;

class FileAccessException extends Exception {
    public FileAccessException(String message) {
        super(message);
    }
}


public class l10p28 {
    

    public static void main(String[] args) {
        String filePath = "testout.txt"; 
        try {
            checkFileAccessibility(filePath);
            readFile(filePath);
        } catch (FileAccessException e) {
            System.err.println("Custom Error: " + e.getMessage());
        }
    }
    public static void checkFileAccessibility(String filePath) throws FileAccessException {
        File file = new File(filePath);
        if (!file.exists()) {
            throw new FileAccessException("File not found: " + filePath);
        }
        if (!file.canRead()) {
            throw new FileAccessException("File cannot be read due to permission issues: " + filePath);
        }
    }
    public static void readFile(String filePath) {
        try (FileReader fileReader = new FileReader(filePath)) {
            int character;
            while ((character = fileReader.read()) != -1) {
                System.out.print((char) character);
            }
            System.out.println("\nFile read successfully!");
        } catch (FileNotFoundException e) {
            System.err.println("FileNotFoundException: The file could not be found.");
        } catch (IOException e) {
            System.err.println("IOException: Error reading the file.");
}
}
}
