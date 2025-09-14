// File: TestEmployeeSamePackage.java
package com.company;

public class TestEmployeeSamePackage {

    public static void main(String[] args) {
        // Create an instance of Employee
        Employee employee = new Employee("John Doe", 30, 50000, "123-45-6789");

        // Access the fields (within the same package)
        System.out.println("Name: " + employee.name);        // Public: Accessible
        System.out.println("Age: " + employee.age);          // Protected: Accessible
        System.out.println("Salary: " + employee.salary);    // Package-private: Accessible
        System.out.println("SSN: " + employee.getSsn());     // Private: Accessible via method
    }
}
