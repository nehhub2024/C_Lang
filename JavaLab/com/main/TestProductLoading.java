// File: TestProductLoading.java
package com.main;

public class TestProductLoading {

    public static void main(String[] args) {
        try {
            // Loading the Product class using the fully qualified name
            Class<?> productClass = Class.forName("com.store.Product");
            
            // Create an instance of the Product class using reflection
            Object productObject = productClass.getDeclaredConstructor(String.class, double.class)
                                              .newInstance("Laptop", 1200.50);

            // Accessing methods of Product class using reflection
            // Casting the object to Product type
            com.store.Product product = (com.store.Product) productObject;
            product.displayProductDetails();  // Output product details

        } catch (ClassNotFoundException e) {
            System.out.println("Class not found: " + e.getMessage());
        } catch (Exception e) {
            System.out.println("Error: " + e.getMessage());
        }
    }
}
