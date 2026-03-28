import java.util.Scanner;



public class User_Input_In_JAVA {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

//        int x = sc.nextInt(); // function/method
//        System.out.println("Value of the x : " + x);

        String name = sc.nextLine();
        System.out.println(name);

        boolean isTrue = sc.nextBoolean();
        float f = sc.nextFloat();


        /*
        *  System - class
        *  out - it is a object of printStream class which is
        *         declared static inside the class System
        * println - method of printStream class
        *
        * */
    }
}




