package lab9_semester1;

import java.io.*;
import java.net.*;
import java.util.Scanner;  


public class ClientBMI
{
	private DataOutputStream toServer;
	private DataInputStream fromServer;
	public static void main(String[] args) 
	{    
		new ClientBMI();
	}
	public ClientBMI()
	{
		try
		{
      			// Create a socket to connect to the server
      			Socket socket = new Socket("localhost", 8000);
      
			Scanner sc=new Scanner(System.in);  
			System.out.print("Please Enter Weight: ");
   			Double weight=sc.nextDouble();
			System.out.print("Please Enter Height: ");
			Double height=sc.nextDouble();

			while(weight !=0 && height != 0)
			{
   			      	// Create an input stream to receive data from the server
     	 			fromServer = new DataInputStream(socket.getInputStream());

      				// Create an output stream to send data to the server
     	 			toServer =new DataOutputStream(socket.getOutputStream());
					toServer.writeDouble(weight);
					toServer.writeDouble(height);
        			toServer.flush();
				double bmi = fromServer.readDouble();

   				System.out.println("BMI is : " + bmi);
				System.out.print("Please Enter Weight: ");
				weight=sc.nextDouble();
				System.out.print("Please Enter Height: ");
				height=sc.nextDouble();
			}
	
		}
    		catch (IOException ex) 
		{
      			System.out.println(ex.toString() + '\n');
    		}
  	}
	
  
 }