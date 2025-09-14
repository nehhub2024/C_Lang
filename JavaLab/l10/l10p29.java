package l10;

import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;


public class l10p29 {
    

    public static void main(String[] args) {
        String filePath = "testout.txt"; 
        int wordCount = countWordsInFile(filePath);
        if (wordCount != -1) {
            System.out.println("Total number of words in the file: " + wordCount);
        }
    }
    private static int countWordsInFile(String filePath) {
        int wordCount = 0;
        try (BufferedReader bufferedReader = new BufferedReader(new FileReader(filePath))) {
            String line;
            while ((line = bufferedReader.readLine()) != null) {
                String[] words = line.trim().split("\\s+"); 
                wordCount += words.length;
            }
        } catch (IOException e) {
            System.err.println("Error reading the file: " + e.getMessage());
            return -1;
        }
        return wordCount;
}
}
