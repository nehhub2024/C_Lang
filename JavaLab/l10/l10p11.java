package l10;
import java.io.IOException;
import java.io.OutputStreamWriter;

public class l10p11 {
    

    public static void main(String[] args) {
        OutputStreamWriter writer = new OutputStreamWriter(System.out);
        
        try {
            writer.write("Hello, this is a message using OutputStreamWriter!\n");
            writer.flush(); 
        } catch (IOException e) {
            System.out.println("An error occurred while writing to the console.");
            e.printStackTrace();
        } finally {
            try {
                writer.close(); 
            } catch (IOException e) {
                System.out.println("Error closing OutputStreamWriter.");
            }
}
}
}