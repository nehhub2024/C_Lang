package l10;


import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;


public class l10p20 {
    

    public static void main(String[] args) {
        String sourceFile = "testout.txt"; 
        String destinationFile = "test.txt"; 
        try (FileInputStream fileInputStream = new FileInputStream(sourceFile);
             FileOutputStream fileOutputStream = new FileOutputStream(destinationFile)) {

            byte[] buffer = new byte[1024]; 
            int bytesRead;

            while ((bytesRead = fileInputStream.read(buffer)) != -1) {
                fileOutputStream.write(buffer, 0, bytesRead); 
            }

            System.out.println("File copied successfully!");
        } catch (IOException e) {
            System.err.println("Error processing file: " + e.getMessage());
}
}
}
