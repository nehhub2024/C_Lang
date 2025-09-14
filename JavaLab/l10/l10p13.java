package l10;
import java.io.DataOutputStream;
import java.io.IOException;
import java.io.OutputStream;
import java.io.ByteArrayOutputStream;
import java.util.Scanner;
public class l10p13 {
    
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter an integer: ");
        int intValue = scanner.nextInt();

        System.out.print("Enter a double: ");
        double doubleValue = scanner.nextDouble();
        scanner.nextLine(); 

        System.out.print("Enter a string: ");
        String stringValue = scanner.nextLine();
        try (ByteArrayOutputStream byteStream = new ByteArrayOutputStream();
             DataOutputStream dataOutputStream = new DataOutputStream(byteStream)) {
            dataOutputStream.writeInt(intValue);
            dataOutputStream.writeDouble(doubleValue);
            dataOutputStream.writeUTF(stringValue);
            dataOutputStream.flush();

            System.out.println("\nData written to console in binary format: ");
            byte[] byteArray = byteStream.toByteArray();
            for (byte b : byteArray) {
                System.out.print(b + " ");
            }
        } catch (IOException e) {
            System.err.println("Error writing data: " + e.getMessage());
        }}
}
