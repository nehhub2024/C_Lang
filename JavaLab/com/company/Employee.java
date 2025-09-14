// File: Employee.java
package com.company;

public class Employee {

    // Public field: can be accessed from anywhere
    public String name;
    
    // Protected field: can be accessed within the same package or by subclasses
    protected int age;
    
    // Package-private field (default): can only be accessed within the same package
    double salary;
    
    // Private field: can only be accessed within the same class
    private String ssn;

    // Constructor to initialize Employee
    public Employee(String name, int age, double salary, String ssn) {
        this.name = name;
        this.age = age;
        this.salary = salary;
        this.ssn = ssn;
    }

    // Public method to access private ssn (demonstrating encapsulation)
    public String getSsn() {
        return ssn;
    }
}
