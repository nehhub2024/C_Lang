package l10;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;


public class l10p15 {


    public static void main(String[] args) {
        String sourceFile = "testout.txt";  
        String destinationFile = "test.txt";  
        try (FileReader fileReader = new FileReader(sourceFile);
             FileWriter fileWriter = new FileWriter(destinationFile)) {
            int character;
            while ((character = fileReader.read()) != -1) {
                fileWriter.write(character);  
            }
            System.out.println("File copied successfully!");
        } catch (IOException e) {
            System.err.println("Error processing file: " + e.getMessage());
 }
}
}