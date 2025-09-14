package l10;
    

import java.io.*;
public class l10p30 {

    public static void main(String[] args) {
        String sourceFile = "SampleVideo_1280x720_1mb.mp4"; 
        String destinationFile = "copy.mp4"; 
        copyFileWithProgress(sourceFile, destinationFile);
    }

    public static void copyFileWithProgress(String sourceFile, String destinationFile) {
        File source = new File(sourceFile);
        long totalBytes = source.length(); 

        try (FileInputStream fileInputStream = new FileInputStream(source);
             FileOutputStream fileOutputStream = new FileOutputStream(destinationFile)) {
            byte[] buffer = new byte[4096]; 
            int bytesRead;
            long bytesCopied = 0;
            int lastPercentage = 0;
            while ((bytesRead = fileInputStream.read(buffer)) != -1) {
                fileOutputStream.write(buffer, 0, bytesRead);
                bytesCopied += bytesRead;

                int currentPercentage = (int) ((bytesCopied * 100) / totalBytes);
                if (currentPercentage != lastPercentage) { 
                    System.out.print("\rCopying... " + currentPercentage + "%");
                    lastPercentage = currentPercentage;
                }
            }
            System.out.println("\nFile copied successfully!");
        } catch (IOException e) {
            System.err.println("Error copying file: " + e.getMessage());
}
}
}
