package l10;
import java.io.PrintWriter;

public class l10p14 {
    


    public static void main(String[] args) {
        PrintWriter printWriter = new PrintWriter(System.out, true);
        String name = "Alice Johnson";
        int age = 25;

        printWriter.println("Formatted Output:");
        printWriter.printf("Name: %s%n", name);
        printWriter.printf("Age: %d years%n",age);
}
}