// Parent class
class Vehicle {
    void run() {
        System.out.println("Vehicle is running");
    }
}

// Child class
class Bike extends Vehicle {
    @Override
    void run() {
        System.out.println("Bike is running safely");
    }
}

// Main class
public class programe2 {
    public static void main(String[] args) {
        Bike b = new Bike();
        b.run();   // overridden method is called
    }
}
