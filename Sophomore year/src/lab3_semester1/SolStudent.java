/**
 * Created by IntelliJ IDEA.<br/>
 * User: javokhir<br/>
 * Date: 30/09/21<br/>
 * Time: 15:07<br/>
 * ID: U2010257<br/>
 * Telegram: @ShJavohir<br/>
 * Github: https://github.com/ShJavokhir<br/>
 */

package lab3_semester1;

/**
 * Created by IntelliJ IDEA.<br/>
 * User: javokhir<br/>
 * Date: 30/09/21<br/>
 * Time: 15:07<br/>
 */
class SolStudent extends Student{
    private double computerProgramming;
    private double introToEco;

    public SolStudent(){}

    public SolStudent(double computerProgramming, double introToEco) {
        this.computerProgramming = computerProgramming;
        this.introToEco = introToEco;
    }

    public SolStudent(String studentName, int studentId, double english, double maths, double computerProgramming, double introToEco) {
        super(studentName, studentId, english, maths);
        this.computerProgramming = computerProgramming;
        this.introToEco = introToEco;
    }

    public double getComputerProgramming() {
        return computerProgramming;
    }

    public void setComputerProgramming(double computerProgramming) {
        this.computerProgramming = computerProgramming;
    }

    public double getIntroToEco() {
        return introToEco;
    }

    public void setIntroToEco(double introToEco) {
        this.introToEco = introToEco;
    }

    public double totalScore(){
        return computerProgramming + introToEco + getEnglish() + getMaths();
    }
}
