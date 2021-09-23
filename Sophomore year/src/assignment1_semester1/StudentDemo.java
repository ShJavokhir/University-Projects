/**
 * Created by IntelliJ IDEA.<br/>
 * User: javokhir<br/>
 * Date: 22/09/21<br/>
 * Time: 17:10<br/>
 * ID: U2010257<br/>
 * Telegram: @ShJavohir<br/>
 * Github: https://github.com/ShJavokhir<br/>
 */

package assignment1_semester1;

import java.util.*;

public class StudentDemo {
    public static void main(String[] args) {
        String studentName;
        int studentAge, studentId;

        //getting reference from Scanner class, so we gonna use it to get input from console
        Scanner sc = new Scanner(System.in);

        //asking user for input
        System.out.println("Enter student ID");
        studentId = sc.nextInt();
        System.out.println("Enter student name");
        studentName = sc.next();
        System.out.println("Enter student age");
        studentAge = sc.nextInt();

        // Got reference from Student Class using Parametric constructor
        Student demoStudent1 = new Student(studentId, studentName, studentAge);

        //Got reference from Student Class using default constructor
        Student demoStudent2 = new Student();
        //using setters
        demoStudent2.setStudentId(studentId);
        demoStudent2.setAge(studentAge);
        demoStudent2.setStudentName(studentName);

        //using getters
        System.out.println("Student id: " + demoStudent2.getStudentId() + " name: " + demoStudent2.getStudentName() + " age: "+ demoStudent2.getAge());



    }
}
class Student {
    private int studentId;
    private String studentName;
    private int age;
    //default constructor
    public Student(){

    }
    //parametric constructor
    public Student(int studentId, String studentName, int age) {
        this.studentId = studentId;
        this.studentName = studentName;
        this.age = age;
    }

    public int getStudentId() {
        return studentId;
    }

    public void setStudentId(int studentId) {
        this.studentId = studentId;
    }

    public String getStudentName() {
        return studentName;
    }

    public void setStudentName(String studentName) {
        this.studentName = studentName;
    }

    public int getAge() {
        return age;
    }

    public void setAge(int age) {
        this.age = age;
    }
}
