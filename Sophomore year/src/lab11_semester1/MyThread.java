/**
 * Created by IntelliJ IDEA.<br/>
 * User: javokhir<br/>
 * Date: 02/12/21<br/>
 * Time: 15:07<br/>
 * ID: U2010257<br/>
 * Telegram: @ShJavohir<br/>
 * Github: https://github.com/ShJavokhir<br/>
 */

package lab11_semester1;

/**
 * Created by IntelliJ IDEA.<br/>
 * User: javokhir<br/>
 * Date: 02/12/21<br/>
 * Time: 15:07<br/>
 */

public class MyThread extends Thread
{
    synchronized void Print(int n) {
        for (int i = 1; i <= 10; i++) {
            System.out.println(n * i);
        }
        try {
            Thread.sleep(500);
        } catch (Exception e) {
            System.out.println(e);
        }
    }

}



