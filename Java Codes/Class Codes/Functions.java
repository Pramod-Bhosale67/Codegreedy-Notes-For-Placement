
public class Functions {

    // no return type, no parameter
    public static void greeting(){
        System.out.println("Hello Java Programming");
    }

    // with return type, no parameter
    public static String showName(){

        String name = "Codegreedy";
        return name;
    }

    // no return type, with parameter
    public static void sumOfTwoNumbers(int x, int y){

        int result = x + y;
        System.out.println("Sum is: " + result);
    }

    // with return type, with parameter
    public static int sumOfNumbers(int x, int y, int z){

        int result = (x + y + z);
        return result;
    }

    // driver code
    public static void main(String[] args) {

        /*
        *  declaration
        *  fun call
        *  main function is not meant for writing any logic.
        * */

        greeting(); // func calling

        String name = showName();
        System.out.println("Name : " + name);

        sumOfTwoNumbers(90, 90);

        int sum = sumOfNumbers(90, 40, 60);
        System.out.println("sum of numbers: " + sum);
    }
}




