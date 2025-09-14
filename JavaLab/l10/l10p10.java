package l10;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;


public class l10p10 {
    


    public static void main(String[] args) {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int number = 0;
        boolean isValid = false;
        while (!isValid) {
            try {
                System.out.print("Enter an integer: ");
                String input = br.readLine(); 
                number = Integer.parseInt(input);
                isValid = true;              
            } catch (IOException e) {
                System.out.println("An error occurred while reading input.");
            } catch (NumberFormatException e) {
                System.out.println("Invalid input. Please enter a valid integer.");
            }
        }
        System.out.println("You entered a valid integer: " + number);
}
}
