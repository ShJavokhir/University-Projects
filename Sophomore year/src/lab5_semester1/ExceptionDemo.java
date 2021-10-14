/**
 * Created by IntelliJ IDEA.<br/>
 * User: javokhir<br/>
 * Date: 14/10/21<br/>
 * Time: 15:25<br/>
 * ID: U2010257<br/>
 * Telegram: @ShJavohir<br/>
 * Github: https://github.com/ShJavokhir<br/>
 */

package lab5_semester1;

public class ExceptionDemo {
    public static void main(String[] args) {
        try {
            //this line does not throw error
            Student student1 = new Student(2010255, "Jamshid", 19);

            Student student2 = new Student();
            student2.setStudentID(2010257);
            student2.setStudentName("Javokhir");
            //this line throws error
            student2.setStudentAge(777);

        } catch (AgeOutOfRangeException e) {
            e.printStackTrace();
        }

    }
}
