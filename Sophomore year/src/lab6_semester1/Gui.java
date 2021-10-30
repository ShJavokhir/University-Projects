
 /**
 * Created by IntelliJ IDEA.<br/>
 * User: javokhir<br/>
 * Date: 30/10/21<br/>
 * Time: 19:40<br/>
 * ID: U2010257<br/>
 * Telegram: @ShJavohir<br/>
 * Github: https://github.com/ShJavokhir<br/>
 */

package lab6_semester1;
 import javax.swing.*;
 import java.awt.*;
 import java.awt.event.ActionEvent;
 import java.awt.event.ActionListener;
 import java.awt.event.ItemEvent;
 import java.awt.event.ItemListener;

 public class Gui {
    public static void main(String[] args) {
        JFrame window = new JFrame();
        //settings window sizes
        window.setSize(new Dimension(1000, 200));

        //setting window title
        window.setName("Lab 6");

        //setting layout
        window.setLayout(new GridBagLayout());

        //adding components
        addButton(window);
        addCheckBox(window);
        addRadioButton(window);
        addTextField(window);
        addComboBox(window);

        //making window visible
        window.setVisible(true);
    }

    public static void addButton(JFrame window){
        //creating new instance of Jbutton class with name
        JButton button = new JButton("This is cute button");
        //setting button listener
        button.addActionListener(new ActionListener() {
            //for example this method will be called when button is pressed
            @Override
            public void actionPerformed(ActionEvent e) {
                System.out.println("My Cute button clicked !");
            }
        });

        //adding button object to window frame
        window.add(button);
    }

    public static void addCheckBox(JFrame window){
        //checkbox
        JCheckBox checkBox = new JCheckBox("Is Java Cool ?");
        //adding listener
        checkBox.addItemListener(new ItemListener() {
            public void itemStateChanged(ItemEvent e) {
                System.out.println("Checkbox status: "
                        + (e.getStateChange()==1?"checked":"unchecked"));
            }
        });

        window.add(checkBox);
    }

     public static void addRadioButton(JFrame window){
        JRadioButton radioButton1 = new JRadioButton("Java");
        radioButton1.setSelected(true);
        JRadioButton radioButton2 = new JRadioButton("Python");

        radioButton1.addActionListener(new ActionListener() {
             @Override
             public void actionPerformed(ActionEvent e) {
                 System.out.println("Java selected");
             }
        });
        radioButton2.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                System.out.println("Python selected");
            }
        });

        ButtonGroup buttonGroup = new ButtonGroup();
        buttonGroup.add(radioButton1);
        buttonGroup.add(radioButton2);

        window.add(radioButton1);
        window.add(radioButton2);
     }

     public static void addTextField(JFrame window){
        JTextField textField = new JTextField("Type something and press enter");
        textField.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                System.out.println("You typed: " + textField.getText());
            }
        });

        window.add(textField);
     }


     public static void addComboBox(JFrame window){
        JComboBox<Integer> comboBox = new JComboBox<>();
        comboBox.addItem(1);
        comboBox.addItem(2);
        comboBox.addItem(3);

        comboBox.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                System.out.println("You selected: " + comboBox.getSelectedItem() +  " from ComboBox");
            }
        });

        window.add(comboBox);
     }
}
