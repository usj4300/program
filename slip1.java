PROG NO.1
======>>

import java.util.Scanner;  
public class PowerOfNumberExample4  
{  
public static void main(String args[])  
{  
int b, e;  
Scanner sc = new Scanner(System.in);  
System.out.print("Enter the base: ");  
b = sc.nextInt();  
System.out.print("Enter the exponent: ");  
e = sc.nextInt();   
double power = Math.pow(b, e);   
System.out.println(b +" to the power " +e + " is: "+power);  
}  
} 


PROG NO.2
======>>
import java.io.File;
import java.text.SimpleDateFormat;
import java.util.Date;

public class FileOrDirectory {
    public static void main(String[] args) 
	{
        if (args.length == 0) 
		{
            System.out.println("Please provide a file or directory name");
            return;
        }

        String path = args[0];
        File file = new File(path);

        if (file.isDirectory()) 
		{
            System.out.println(path + " is a directory");
            System.out.println("Contents of the directory:");
            String[] contents = file.list();
            for (String content : contents)
			{
                System.out.println(content);
            }
        } else if (file.isFile()) 
		{
            System.out.println(path + " is a file");
            System.out.println("Information about the file:");
            System.out.println("Path: " + file.getAbsolutePath());
            System.out.println("Size: " + file.length() + " bytes");
            Date lastModifiedDate = new Date(file.lastModified());
            SimpleDateFormat dateFormat = new SimpleDateFormat("dd/MM/yyyy HH:mm:ss");
            String formattedDate = dateFormat.format(lastModifiedDate);
            System.out.println("Last modified: " + formattedDate);
        } else 
		{
            System.out.println(path + " is not a valid file or directory");
        }
    }
}