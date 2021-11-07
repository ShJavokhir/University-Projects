/**
 * Created by IntelliJ IDEA.<br/>
 * User: javokhir<br/>
 * Date: 07/11/21<br/>
 * Time: 08:53<br/>
 * ID: U2010257<br/>
 * Telegram: @ShJavohir<br/>
 * Github: https://github.com/ShJavokhir<br/>
 */

package lab7_semester1;

import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;

public class StudentCollectionDemo {
    public static void main(String[] args) {
        //initializing students ArrayList
        ArrayList<Student> students = new ArrayList<>();
        //filling students arraylist with sample examples
        students.add(new Student("u2010257", "Javokhir", 19));
        students.add(new Student("u2010000", "Some student 1", 16));
        students.add(new Student("u2010777", "Some student 2", 23));
        students.add(new Student("u2077777", "Some student 3", 18));
        students.add(new Student("u2010111", "Some student 4", 19));

        System.out.println("Before sorting by age:");
        //this line of code iterates through ever objects of our array list and calls println(Object o) method
        students.forEach(System.out::println);

        //we can sort our students ArrayList, because we implemented Comparable interface in our Students class
        Collections.sort(students);

        System.out.println("After sorting by age:");
        students.forEach(System.out::println);


    }
}
