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
 * Date: 07/10/21<br/>
 * Time: 15:33<br/>
 */
//Rectangle class implementing RectangleComparable interface, so Rectangle class have to override all methods of RectangleComparable interface, in our case isEqual() method
public class Rectangle implements RectangleComparable{

    private double height;
    private double width;
    //this is static field, which means we can access its value and change its value without creating an instance of this class
    public static int numberOfRectangle;

    Rectangle(){
        //we are incrementing numberOfRectangle, because new instance created
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
        //we are casting Object to Rectangle class
        Rectangle rectangle1 = (Rectangle) o;
        //we are comparing data fields of each clsas
        return this.width == rectangle1.width && this.height == rectangle1.height;
    }

    public static int getNumberOfRectangle(){
        return numberOfRectangle;
    }
}
