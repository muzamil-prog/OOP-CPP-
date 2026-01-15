// Parent class
class Person {
    protected String name = "Rahul";

    protected void display() {
        System.out.println("Name: " + name);
    }
}

// Child class
class Student extends Person {
    void show() {
        display();  // accessing protected method
    }
}

// Main class
public class programe3 {
    public static void main(String[] args) {
        Student s = new Student();
        s.show();
    }
}
