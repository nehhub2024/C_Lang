package l10;

import java.io.*;



public class l10p24 {
    

    public static void main(String[] args) {
        String sourceFile = "testout.txt"; 
        String destinationFile1 = "copy1.txt"; 
        String destinationFile2 = "copy2.txt";

        long startTime1 = System.nanoTime();
        copyUsingFileInputStream(sourceFile, destinationFile1);
        long endTime1 = System.nanoTime();
        long duration1 = (endTime1 - startTime1) / 1_000_000; 

        long startTime2 = System.nanoTime();
        copyUsingBufferedInputStream(sourceFile, destinationFile2);
        long endTime2 = System.nanoTime();
        long duration2 = (endTime2 - startTime2) / 1_000_000; 

        System.out.println("Time taken using FileInputStream: " + duration1 + " ms");
        System.out.println("Time taken using BufferedInputStream: " + duration2 + " ms");
    }
    private static void copyUsingFileInputStream(String source, String destination) {
        try (FileInputStream fileInputStream = new FileInputStream(source);
             FileOutputStream fileOutputStream = new FileOutputStream(destination)) {
            int byteData;
            while ((byteData = fileInputStream.read()) != -1) {
                fileOutputStream.write(byteData);
            }
        } catch (IOException e) {
            System.err.println("Error copying file with FileInputStream: " + e.getMessage());
        }
    }
    private static void copyUsingBufferedInputStream(String source, String destination) {
        try (BufferedInputStream bufferedInputStream = new BufferedInputStream(new FileInputStream(source));
             BufferedOutputStream bufferedOutputStream = new BufferedOutputStream(new FileOutputStream(destination))) {
            byte[] buffer = new byte[1024];
            int bytesRead;
            while ((bytesRead = bufferedInputStream.read(buffer)) != -1) {
                bufferedOutputStream.write(buffer, 0, bytesRead);
            }
        } catch (IOException e) {
            System.err.println("Error copying file with BufferedInputStream: " + e.getMessage());
 }
}
}
