/**
 * Created by IntelliJ IDEA.<br/>
 * User: javokhir<br/>
 * Date: 30/09/21<br/>
 * Time: 15:08<br/>
 * ID: U2010257<br/>
 * Telegram: @ShJavohir<br/>
 * Github: https://github.com/ShJavokhir<br/>
 */

package lab3_semester1;

/**
 * Created by IntelliJ IDEA.<br/>
 * User: javokhir<br/>
 * Date: 30/09/21<br/>
 * Time: 15:08<br/>
 */
class SocieStudent extends Student{
    private double oop1;
    private double introToIt;

    public SocieStudent(){}

    public SocieStudent(double oop1, double introToIt) {
        this.oop1 = oop1;
        this.introToIt = introToIt;
    }
    //Here is we are using super method that passes arguments to parent class
    public SocieStudent(String studentName, int studentId, double english, double maths, double oop1, double introToIt) {
        super(studentName, studentId, english, maths);
        this.oop1 = oop1;
        this.introToIt = introToIt;
    }

    public double getOop1() {
        return oop1;
    }

    public void setOop1(double oop1) {
        this.oop1 = oop1;
    }

    public double getIntroToIt() {
        return introToIt;
    }

    public void setIntroToIt(double introToIt) {
        this.introToIt = introToIt;
    }

    public double totalScore(){
        return oop1 + introToIt + getEnglish() + getMaths() ;
    }
}
