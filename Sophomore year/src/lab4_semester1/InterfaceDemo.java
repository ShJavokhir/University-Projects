/**
 * Created by IntelliJ IDEA.<br/>
 * User: javokhir<br/>
 * Date: 06/10/21<br/>
 * Time: 15:48<br/>
 * ID: U2010257<br/>
 * Telegram: @ShJavohir<br/>
 * Github: https://github.com/ShJavokhir<br/>
 */

package lab4_semester1;

/**
 * Created by IntelliJ IDEA.<br/>
 * User: javokhir<br/>
 * Date: 06/10/21<br/>
 * Time: 15:48<br/>
 */
public class InterfaceDemo
{
    public static void main(String[] args)
    {
        Rectangle rec1 = new Rectangle ();
        System.out.println ( "Rectangle object number "+Rectangle.getNumberOfRectangle());

        Rectangle rec2 = new Rectangle (10.4, 20.2);
        System.out.println ( "Rectangle object number "+Rectangle.getNumberOfRectangle());

        Rectangle rec3 = new Rectangle (rec1);
        System.out.println ( "Rectangle object number "+Rectangle.getNumberOfRectangle());

        System.out.println ( "Area of rec2:  " + rec2.getArea());

        System.out.println ( "Rectangle object rec1 and rec2 are equal " + rec1.equalTo(rec2));
        System.out.println ( "Rectangle object rec1 and rec3 are equal " + rec1.equalTo(rec3));
    }
}

