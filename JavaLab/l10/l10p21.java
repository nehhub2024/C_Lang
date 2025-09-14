package l10;

import java.io.IOException;
import java.io.RandomAccessFile;


public class l10p21 {
    

    public static void main(String[] args) {
        String filePath = "testout.txt"; 

        try (RandomAccessFile randomAccessFile = new RandomAccessFile(filePath, "rw")) {
            System.out.println("Reading first 10 bytes:");
            for (int i = 0; i < 10; i++) {
                if (randomAccessFile.getFilePointer() < randomAccessFile.length()) {
                    System.out.print((char) randomAccessFile.readByte()); 
                }
            }
            System.out.println("\n");
            long modifyPosition = 5;
            randomAccessFile.seek(modifyPosition); 
            randomAccessFile.writeBytes("MODIFIED"); 
            System.out.println("Modification done at position " + modifyPosition);
        } catch (IOException e) {
            System.err.println("Error processing file: " + e.getMessage());
}
}
}
