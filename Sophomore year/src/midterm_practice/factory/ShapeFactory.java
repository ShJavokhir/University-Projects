/**
 * Created by IntelliJ IDEA.<br/>
 * User: javokhir<br/>
 * Date: 20/10/21<br/>
 * Time: 12:23<br/>
 * ID: U2010257<br/>
 * Telegram: @ShJavohir<br/>
 * Github: https://github.com/ShJavokhir<br/>
 */

package midterm_practice.factory;

/**
 * Created by IntelliJ IDEA.<br/>
 * User: javokhir<br/>
 * Date: 20/10/21<br/>
 * Time: 12:23<br/>
 */
public class ShapeFactory {
    public static Shape getShape(String shapeName){

        if(shapeName.equals("Circle")){
            return new Circle();
        }else if(shapeName.equals("Rectangle")){
            return new Rectangle();
        }else if(shapeName.equals("Square")){
            return new Square();
        }

        return null;
    }
}
