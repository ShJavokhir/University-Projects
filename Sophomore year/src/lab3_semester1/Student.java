/**
 * Created by IntelliJ IDEA.<br/>
 * User: javokhir<br/>
 * Date: 30/09/21<br/>
 * Time: 15:05<br/>
 * ID: U2010257<br/>
 * Telegram: @ShJavohir<br/>
 * Github: https://github.com/ShJavokhir<br/>
 */

package lab3_semester1;

/**
 * Created by IntelliJ IDEA.<br/>
 * User: javokhir<br/>
 * Date: 30/09/21<br/>
 * Time: 15:05<br/>
 */
public class Student {
    private String studentName;
    private int studentId;
    private double english;
    private double maths;

    public Student(){}

    public Student(String studentName, int studentId, double english, double maths) {
        this.studentName = studentName;
        this.studentId = studentId;
        this.english = english;
        this.maths = maths;
    }

    public String getStudentName() {
        return studentName;
    }

    public void setStudentName(String studentName) {
        this.studentName = studentName;
    }

    public int getStudentId() {
        return studentId;
    }

    public void setStudentId(int studentId) {
        this.studentId = studentId;
    }

    public double getEnglish() {
        return english;
    }

    public void setEnglish(double english) {
        this.english = english;
    }

    public double getMaths() {
        return maths;
    }

    public void setMaths(double maths) {
        this.maths = maths;
    }

    public double totalScore(){
        return 0;
    }
}
