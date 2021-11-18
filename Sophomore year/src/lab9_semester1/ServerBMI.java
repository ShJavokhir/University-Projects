package lab9_semester1;

import java.io.*;
import java.net.*;
import java.util.*;

public class ServerBMI
{
  
	public static void main(String[] args) 
	{
    		new ServerBMI();
	}

	public ServerBMI()// constructor
	{
    		try 
		{
      			// Create a server socket
      			ServerSocket serverSocket = new ServerSocket(8000);
      			System.out.println("Server started at " + new Date() + '\n');

      			// Listen for a connection request
      			Socket socket = serverSocket.accept();

      			// Create data input and output streams
      			DataInputStream inputFromClient = new DataInputStream(
        		socket.getInputStream());
      			DataOutputStream outputToClient = new DataOutputStream(
        		socket.getOutputStream());

      			while (true)
			{
        			// Receive weight and height from the client
        			double weight = inputFromClient.readDouble();
					double height = inputFromClient.readDouble();
				 	System.out.println("We have received weight: " + weight + " height: " + height);
        			// Compute bmi
        			double bmi = weight / (height * height);

        			// Send bmi back to the client
        			outputToClient.writeDouble(bmi);
 			}
    		}
    		catch(IOException ex)
		{
      			System.err.println(ex);
    		}
  	}
}