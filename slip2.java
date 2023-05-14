PROG NO 1
======>>

import java.util.Scanner;  
public class CharactersAZ 
{
    public static void main(String[] args) 
	{
        for(char ch = 'A'; ch <= 'Z'; ch++) 
		{
            System.out.print(ch + " ");
        }
    }
}


PROG NO 2
======>>
interface Shape {
    public final double PI = 3.14159265359;

    public double area();
}

class Circle implements Shape {
    private double radius;

    public Circle(double radius) {
        this.radius = radius;
    }

    public double area() {
        return PI * radius * radius;
    }
}

class Sphere implements Shape {
    private double radius;

    public Sphere(double radius) {
        this.radius = radius;
    }

    public double area() {
        return 4 * PI * radius * radius;
    }
}

public class Main {
    public static void main(String[] args) {
        Circle circle = new Circle(5);
        System.out.println("Area of circle with radius 5 is " + circle.area());

        Sphere sphere = new Sphere(5);
        System.out.println("Area of sphere with radius 5 is " + sphere.area());
    }
}