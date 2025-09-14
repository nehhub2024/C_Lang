package l10;

import java.io.*;
import java.util.Scanner;


public class l10p25 {
    

    public static void main(String[] args) {
        String filePath = "testout.txt"; 
        long startTime1 = System.nanoTime();
        readUsingBufferedReader(filePath);
        long endTime1 = System.nanoTime();
        long duration1 = (endTime1 - startTime1) / 1_000_000; 

        long startTime2 = System.nanoTime();
        readUsingScanner(filePath);
        long endTime2 = System.nanoTime();
        long duration2 = (endTime2 - startTime2) / 1_000_000; 

        System.out.println("\nTime taken using BufferedReader: " + duration1 + " ms");
        System.out.println("Time taken using Scanner: " + duration2 + " ms");

        System.out.println("\nBufferedReader is generally faster for large files.");
        System.out.println("Scanner is easier to use when parsing tokens (e.g., numbers, words).");
    }
    private static void readUsingBufferedReader(String filePath) {
        try (BufferedReader bufferedReader = new BufferedReader(new FileReader(filePath))) {
            String line;
            while ((line = bufferedReader.readLine()) != null) {
            }
        } catch (IOException e) {
            System.err.println("Error reading file with BufferedReader: " + e.getMessage());
        }
    }
    private static void readUsingScanner(String filePath) {
        try (Scanner scanner = new Scanner(new File(filePath))) {
            while (scanner.hasNextLine()) {
                String line = scanner.nextLine();
            }
        } catch (FileNotFoundException e) {
            System.err.println("Error reading file with Scanner: " + e.getMessage());
}
}
}
