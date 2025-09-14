// File: Main.java (no package declaration - default package)
public class Main {

    public static void main(String[] args) {
        // Try to create a Person object from the 'com.example' package
        com.example.Person person = new com.example.Person("John Doe");
        System.out.println("Person's name: " + person.getName());
    }
}
