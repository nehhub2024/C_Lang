public class l4p1 {
    public static void main(String[] args) {

        if (args.length != 10) {
            System.out.println("Please enter exactly 10 numbers.");
            return;
        }

        int evenCount = 0;
        int oddCount = 0;

        for (String arg : args) {
            try {
                // Parse the argument to an integer
                int number = Integer.parseInt(arg);

                // Check if the number is even or odd
                if (number % 2 == 0) {
                    evenCount++; // Increment even count
                } else {
                    oddCount++; // Increment odd count
                }
            } catch (NumberFormatException e) {
                System.out.println("Invalid input: " + arg + " is not a valid integer.");
                return;
            }
        }

        // Print the results
        System.out.println("Total even numbers: " + evenCount);
        System.out.println("Total odd numbers: " + oddCount);
    }
}