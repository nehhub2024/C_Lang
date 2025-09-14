package l10;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
public class l10p9 {
    

    public static void main(String[] args) {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in)); 
        try {
            System.out.print("Enter an integer: ");
            int intValue = Integer.parseInt(br.readLine());

            System.out.print("Enter a float: ");
            float floatValue = Float.parseFloat(br.readLine());

            System.out.print("Enter a double: ");
            double doubleValue = Double.parseDouble(br.readLine());

            System.out.println("\nYou entered:");
            System.out.println("Integer: " + intValue);
            System.out.println("Float: " + floatValue);
            System.out.println("Double: " + doubleValue);
        } catch (IOException e) {
            System.out.println("An error occurred while reading input.");
            e.printStackTrace();
        } catch (NumberFormatException e) {
            System.out.println("Invalid input. Please enter valid numbers.");
}
}
}
