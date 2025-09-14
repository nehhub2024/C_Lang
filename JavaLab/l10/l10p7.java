package l10;

import java.io.InputStreamReader;
import java.io.BufferedReader;
import java.io.IOException;

public class l10p7 {
    public static void main(String[] args) {
        try (InputStreamReader inputStreamReader = new InputStreamReader(System.in);
             BufferedReader bufferedReader = new BufferedReader(inputStreamReader)) {

            System.out.print("Enter a line of text: ");
            String userInput = bufferedReader.readLine(); 

            System.out.println("You entered: " + userInput);

        } catch (IOException e) {
            System.err.println("Error reading input: " + e.getMessage());
}
}
}