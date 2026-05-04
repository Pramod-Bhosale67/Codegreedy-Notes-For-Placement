
// user defined data type - mainly contains data members & member func
class Person{

    // data members
    private int age;
    private String name;

    // member function
    public void details(){
        System.out.println("Name of the student: " + name);
        System.out.println("Age of the student: " + age);
    }
}


public class Main {
    public static void main(String[] args) {

       // object - instance of class which tells
        // what kind of operations we can perform on class
        Person pramod = new Person();

        // using dot (.)
        pramod.age = 20;
        pramod.name = "Pramod";
        pramod.details();

        Person alok = new Person();
        alok.age = 19;
        alok.name = "Alok";
        alok.details();

    }
}




