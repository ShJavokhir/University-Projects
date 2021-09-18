/*
    Author: Javokhir Shomuratov
    Time: 18.09.2021 12:40
    ID: U2010257
 */

package lab1_semester1;
import java.util.Scanner;

public class MyBMI{
    public static void main(String args[]){
        //creating instance of Input scanner class
        Scanner sc = new Scanner(System.in);
        //creating instance of our BmiCalculator class. With the help of this class, we can calculate BMI
        BmiCalculator bmiCalculator = new BmiCalculator();
        //calling get input method of BmiCalculator class so input will be got from console
        bmiCalculator.getInput(sc);
        //calling calculate method
        bmiCalculator.calculate();
        //calling show result method
        bmiCalculator.showResult();
    }
}

class BmiCalculator{
    //private fields of class
    private double weight = 0;
    private double height = 0;
    private byte standart = 0; //0 for normal standart, 1 for US standart
    private double result = 0;

    public void getInput(Scanner sc){
        System.out.print("Please type 1 if your input is in kg/m or 2 for lb/in: ");
        int inputType = sc.nextInt();
        if(inputType == 1){
            // input in kg and meters
            System.out.print("Weight (in kg): ");
            weight = sc.nextDouble();
            System.out.print("Height (in meters): ");
            height = sc.nextDouble();
            standart = 0; //because this is normal standart
        }else if(inputType == 2){
            //input in pound and inches
            System.out.print("Weight (in pounds): ");
            weight = sc.nextDouble();
            System.out.print("Height (in inches): ");
            height = sc.nextDouble();
            standart = 1; //because this is US standart
        }else{
            //we are throwing exception (error). By the way this is not handled in main method
            throw new RuntimeException("Your input is incorrect !");
        }
    }

    //this method is for calling methods by differentiating standart
    public void calculate(){
        if(standart == 0){
            result = calculateBMIinNormalStandart(weight, height);
        }else if(standart == 1){
            result = calculateBMIinUSstandart(weight, height);
        }
    }

    public static double calculateBMIinUSstandart(double weight, double height){
        return weight / Math.pow(height, 2) * 703;
    }

    public static double calculateBMIinNormalStandart(double weight, double height){
        return weight / Math.pow(height, 2);
    }

    //showing result in 2 precise
    public void showResult(){
        System.out.println("BMI is: " + String.format("%.2f", result));
    }
}