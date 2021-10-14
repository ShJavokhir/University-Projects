/**
 * Created by IntelliJ IDEA.<br/>
 * User: javokhir<br/>
 * Date: 14/10/21<br/>
 * Time: 15:18<br/>
 * ID: U2010257<br/>
 * Telegram: @ShJavohir<br/>
 * Github: https://github.com/ShJavokhir<br/>
 */

package lab5_semester1;

public class Student {
    private int studentID;
    private String studentName;
    private int studentAge;

    public Student(){}

    public Student(int studentID, String studentName, int studentAge) throws AgeOutOfRangeException {
        setStudentID(studentID);
        setStudentName(studentName);
        setStudentAge(studentAge);
    }

    public int getStudentID() {
        return studentID;
    }

    public void setStudentID(int studentID) {
        this.studentID = studentID;
    }

    public String getStudentName() {
        return studentName;
    }

    public void setStudentName(String studentName) {
        this.studentName = studentName;
    }

    public int getStudentAge() {
        return studentAge;
    }

    public void setStudentAge(int studentAge) throws AgeOutOfRangeException {
        if(studentAge < 1 || studentAge > 100) throw new AgeOutOfRangeException(Integer.toString(studentAge));
        this.studentAge = studentAge;
    }
}
