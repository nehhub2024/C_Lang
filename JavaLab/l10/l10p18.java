package l10;
import java.io.PrintWriter;
import java.io.FileWriter;
import java.io.IOException;


public class l10p18 {
    


    public static void main(String[] args) {
        String filePath = "testout.txt"; 
        String textToAppend = "This is an appended line."; 

        try (PrintWriter printWriter = new PrintWriter(new FileWriter(filePath, true))) {
            printWriter.println(textToAppend); 
            System.out.println("Text appended successfully to " + filePath);
        } catch (IOException e) {
            System.err.println("Error writing to file: " + e.getMessage());
 }
}
}