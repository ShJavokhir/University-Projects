/**
 * Created by IntelliJ IDEA.<br/>
 * User: javokhir<br/>
 * Date: 20/10/21<br/>
 * Time: 13:09<br/>
 * ID: U2010257<br/>
 * Telegram: @ShJavohir<br/>
 * Github: https://github.com/ShJavokhir<br/>
 */

package midterm_practice;

/**
 * Created by IntelliJ IDEA.<br/>
 * User: javokhir<br/>
 * Date: 20/10/21<br/>
 * Time: 13:09<br/>
 */
public class task4 {
     void myMethod(String[] reference){
        reference[0] = "f";
    }
    void print(String[] reference){
        for (String value:reference
             ) {
            System.out.print(value + " ");
        }
        System.out.println();
    }

    public static void main(String[] args) {
        String[] array = {"a", "b", "c"};
        task4 a = new task4();
        a.print(array);
        a.myMethod(array);
        a.print(array);
    }
}
