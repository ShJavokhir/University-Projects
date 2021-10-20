/**
 * Created by IntelliJ IDEA.<br/>
 * User: javokhir<br/>
 * Date: 20/10/21<br/>
 * Time: 12:22<br/>
 * ID: U2010257<br/>
 * Telegram: @ShJavohir<br/>
 * Github: https://github.com/ShJavokhir<br/>
 */

package midterm_practice.factory;

/**
 * Created by IntelliJ IDEA.<br/>
 * User: javokhir<br/>
 * Date: 20/10/21<br/>
 * Time: 12:22<br/>
 */
public class FactoryPatternDemo {
    public static void main(String[] args) {
        Shape myShape;

        //misol bizga Circle class i kerak. Uni quyidagicha getShape metodi orqali chaqiramiz;
        myShape = ShapeFactory.getShape("Circle");
        myShape.draw();
    }
}
