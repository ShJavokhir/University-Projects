/**
 * Created by IntelliJ IDEA.<br/>
 * User: javokhir<br/>
 * Date: 06/10/21<br/>
 * Time: 15:33<br/>
 * ID: U2010257<br/>
 * Telegram: @ShJavohir<br/>
 * Github: https://github.com/ShJavokhir<br/>
 */

package lab4_semester1;

/**
 * Created by IntelliJ IDEA.<br/>
 * User: javokhir<br/>
 * Date: 06/10/21<br/>
 * Time: 15:33<br/>
 */
public class Rectangle implements RectangleComparable{

    private double height;
    private double width;
    public static int numberOfRectangle;

    Rectangle(){
        numberOfRectangle++;
    }

    Rectangle(double height, double width){
        this.height = height;
        this.width = width;
        numberOfRectangle++;
    }

    Rectangle(Rectangle rectangle){
        this.height = rectangle.height;
        this.width = rectangle.width;
        numberOfRectangle++;
    }

    public double getHeight() {
        return height;
    }

    public void setHeight(double height) {
        this.height = height;
    }

    public double getWidth() {
        return width;
    }

    public void setWidth(double width) {
        this.width = width;
    }

    double getArea(){
        return height * width;
    }


    @Override
    public boolean equalTo(Object o) {
        Rectangle rectangle1 = (Rectangle) o;
        return this.width == rectangle1.width && this.height == rectangle1.height;
    }

    public static double getNumberOfRectangle(){
        return numberOfRectangle;
    }
}
