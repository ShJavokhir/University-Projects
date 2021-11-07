/**
 * Created by IntelliJ IDEA.<br/>
 * User: javokhir<br/>
 * Date: 07/11/21<br/>
 * Time: 08:44<br/>
 * ID: U2010257<br/>
 * Telegram: @ShJavohir<br/>
 * Github: https://github.com/ShJavokhir<br/>
 */

package lab7_semester1;

//this is usual Student class that we create in our almost all labs, but with Comparable interface
public class Student implements Comparable<Student>{
    String studentId;
    String studentName;
    int studentAge;

    public Student(){

    }

    public Student(String studentId, String studentName, int studentAge) {
        this.studentId = studentId;
        this.studentName = studentName;
        this.studentAge = studentAge;
    }

    public String getStudentId() {
        return studentId;
    }

    public void setStudentId(String studentId) {
        this.studentId = studentId;
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

    public void setStudentAge(int studentAge) {
        this.studentAge = studentAge;
    }

    //Since we implemented Comparable interface, we are required to implement its one method called compareTo
    @Override
    public int compareTo(Student o) {
        //this is logic of comparing
        if (this.studentAge > o.getStudentAge())  return 1;
        if(this.studentAge < o.getStudentAge()) return -1;
        return 0;
    }

    @Override
    public String toString() {
        return "studentId='" + studentId + '\'' +
                ", studentName='" + studentName + '\'' +
                ", studentAge=" + studentAge ;
    }
}
