import java.util.Scanner; // a class in the Java API used to create a Scanner object
public class BodyMassIndex {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Input weight in kilogram: "); //printing operator
        double weight = sc.nextDouble(); //input operation
        System.out.print("\nInput height in meters: "); //printing operator
        double height = sc.nextDouble(); //input operation
        double BMI = weight / (height * height); //formula of bodyMassIndex
        System.out.print("\nThe Body Mass Index (BMI) is " + BMI + " kg/m2"); //printing operator
    }
}