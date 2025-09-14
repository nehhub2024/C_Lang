// File: Product.java
package com.store;

public class Product {
    private String name;
    private double price;

    // Constructor
    public Product(String name, double price) {
        this.name = name;
        this.price = price;
    }

    // Getter methods
    public String getName() {
        return name;
    }

    public double getPrice() {
        return price;
    }

    // Method to display product details
    public void displayProductDetails() {
        System.out.println("Product Name: " + name);
        System.out.println("Product Price: " + price);
    }
}
