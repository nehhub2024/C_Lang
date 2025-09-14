package l10;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class l10p8 {
    


    public static void main(String[] args) {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Enter text (type 'exit' to quit):");
        try {
            String input;
            while (true) {
                input = br.readLine(); 
                if ("exit".equalsIgnoreCase(input)) {
                    System.out.println("Exiting program...");
                    break;
                }
                System.out.println("You entered: " + input);
            }
        } catch (IOException e) {
            System.out.println("An error occurred while reading input.");
            e.printStackTrace();
        } finally {
            try {
                br.close();
            } catch (IOException e) {
                System.out.println("Error closing BufferedReader.");
            }
 }
}
}
