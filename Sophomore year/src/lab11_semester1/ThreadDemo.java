/**
 * Created by IntelliJ IDEA.<br/>
 * User: javokhir<br/>
 * Date: 02/12/21<br/>
 * Time: 15:08<br/>
 * ID: U2010257<br/>
 * Telegram: @ShJavohir<br/>
 * Github: https://github.com/ShJavokhir<br/>
 */

package lab11_semester1;

/**
 * Created by IntelliJ IDEA.<br/>
 * User: javokhir<br/>
 * Date: 02/12/21<br/>
 * Time: 15:08<br/>
 */
public class ThreadDemo {
    public static void main(String[] args) {
        int n = 2; // number of threads
        MyThread th1 = new MyThread();
        MyThread th2 = new MyThread();
        th1.start();
        th1.Print(5);
        System.out.println("---------");
        th2.start();
        th2.Print(10);
    }
}

