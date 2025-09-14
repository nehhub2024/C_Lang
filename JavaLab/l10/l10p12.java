package l10;

import java.io.BufferedWriter;
import java.io.IOException;
import java.io.OutputStreamWriter;

public class l10p12 {
    



    public static void main(String[] args) {
        BufferedWriter writer = new BufferedWriter(new OutputStreamWriter(System.out));
        try {
            writer.write("Hello, this is the first line.");
            writer.newLine(); 
            writer.write("BufferedWriter helps in efficient writing.");
            writer.newLine();
            writer.write("This is the last line of the message.");
            writer.newLine();
            writer.flush();
        } catch (IOException e) {
            System.out.println("An error occurred while writing to the console.");
            e.printStackTrace();
        } finally {
            try {
                writer.close(); 
            } catch (IOException e) {
                System.out.println("Error closing BufferedWriter.");
            }
}
}

}