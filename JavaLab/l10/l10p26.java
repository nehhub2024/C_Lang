package l10;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;


public class l10p26 {
    

    public static void main(String[] args) {
        String filePath = "testout.txt"; 
        try {
            File file = new File(filePath);
            Scanner scanner = new Scanner(file); 
            
            while (scanner.hasNextLine()) {
                System.out.println(scanner.nextLine()); 
            }
        } catch (FileNotFoundException e) {
            System.err.println("Error: File not found -> " + filePath);
            System.err.println("Please check if the file exists and try again.");
}
}
}