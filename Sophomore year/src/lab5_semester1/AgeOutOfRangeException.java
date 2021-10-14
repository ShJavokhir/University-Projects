/**
 * Created by IntelliJ IDEA.<br/>
 * User: javokhir<br/>
 * Date: 14/10/21<br/>
 * Time: 10:20<br/>
 * ID: U2010257<br/>
 * Telegram: @ShJavohir<br/>
 * Github: https://github.com/ShJavokhir<br/>
 */

package lab5_semester1;

/**
 * Created by IntelliJ IDEA.<br/>
 * User: javokhir<br/>
 * Date: 14/10/21<br/>
 * Time: 10:20<br/>
 */
public class AgeOutOfRangeException extends Exception{
    AgeOutOfRangeException(){}

    AgeOutOfRangeException(String message){
        super("Age should be in range 1 and 100 but given age is : " + message);
    }
}
