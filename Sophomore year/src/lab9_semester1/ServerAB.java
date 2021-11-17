package lab9_semester1;

import java.io.*;
import java.net.*;
import java.util.*;

public class ServerAB  
{
  
	public static void main(String[] args) 
	{
    		new ServerAB();
	}

	public ServerAB()// constructor
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
        			// Receive data from the client
        			double weight = inputFromClient.readDouble();
					double height = inputFromClient.readDouble();
				 	System.out.println("We have received value " + weight + " " + height);
        			// Compute bmi
        			double bmi = weight / (height * height);

        			// Send area back to the client
        			outputToClient.writeDouble(bmi);
 			}
    		}
    		catch(IOException ex)
		{
      			System.err.println(ex);
    		}
  	}
}