package l10;

import java.io.IOException;
import java.io.RandomAccessFile;

public class l10p22 {
    

    public static void main(String[] args) {
        String filePath = "numbers.dat"; 
        long position = 4; 
        try (RandomAccessFile file = new RandomAccessFile(filePath, "rw")) {
            if (file.length() < 8) { 
                file.writeInt(10); 
                file.writeInt(20); 
                file.seek(0); 
            }
            file.seek(position);
            int originalValue = file.readInt();
            System.out.println("Original Value at position " + position + ": " + originalValue);

            int modifiedValue = originalValue * 2; 
            file.seek(position); 
            file.writeInt(modifiedValue); 
            System.out.println("Modified Value at position " + position + ": " + modifiedValue);
        } catch (IOException e) {
            System.err.println("Error processing file: " + e.getMessage());
 }
}
}
