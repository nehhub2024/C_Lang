// File: TestEmployeeDifferentPackage.java
package com.other;

import com.company.Employee;

public class TestEmployeeDifferentPackage {

    public static void main(String[] args) {
        // Create an instance of Employee from a different package
        Employee employee = new Employee("Jane Doe", 28, 60000, "987-65-4321");

        // Access the fields (from a different package)
        System.out.println("Name: " + employee.name);        // Public: Accessible
        // System.out.println("Age: " + employee.age);       // Protected: Not accessible (compile-time error)
        // System.out.println("Salary: " + employee.salary); // Package-private: Not accessible (compile-time error)
        // System.out.println("SSN: " + employee.ssn);       // Private: Not accessible (compile-time error)

        // To access SSN, we need the public getter method
        System.out.println("SSN: " + employee.getSsn());     // Private: Accessible via method
    }
}
