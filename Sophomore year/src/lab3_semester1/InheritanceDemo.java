/**
 * Created by IntelliJ IDEA.<br/>
 * User: javokhir<br/>
 * Date: 30/09/21<br/>
 * Time: 15:16<br/>
 * ID: U2010257<br/>
 * Telegram: @ShJavohir<br/>
 * Github: https://github.com/ShJavokhir<br/>
 */

package lab3_semester1;

public class InheritanceDemo {
    public static void main(String[] args) {

        //polymorphism
        //SocieStudent class extended Student class so we can assign SocieStudent class to Student class
        Student socieStudent = new SocieStudent("Javohir", 2010257, 2, 3, 5, 5);

        Student solStudent = new SolStudent("Jamshid", 2010255, 5, 5 ,5 ,5);

        //Just using classes functions..
        System.out.println("Socie student name " + socieStudent.getStudentName() +  "'s total score is: " + socieStudent.totalScore());
        System.out.print("SOL student name " + solStudent.getStudentName() + "'s total score is " + solStudent.totalScore());
    }
}
