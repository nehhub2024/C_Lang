package l10;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;

public class l10p16 {
    




    public static void main(String[] args) {
        String sourceFile = "source.bin";  
        String destinationFile = "destination.bin";  
        try (FileInputStream fileInputStream = new FileInputStream(sourceFile);
             FileOutputStream fileOutputStream = new FileOutputStream(destinationFile)) {
            int byteData;
            while ((byteData = fileInputStream.read()) != -1) {
                fileOutputStream.write(byteData); 
            }
            System.out.println("File copied successfully!");
        } catch (IOException e) {
            System.err.println("Error processing file: " + e.getMessage());
}
}
}