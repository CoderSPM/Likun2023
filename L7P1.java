import java.lang.Math;
import java.util.Scanner;
class L7P1
{
    static double area(double a,double b,double c)
    {
        double s;
        s=(a+b+c)/2;
        double ar;
        ar=Math.sqrt(s*(s-a)*(s-b)*(s-c));
        return ar;
    }
     static double area(double l,double b)
    {
        return l*b;
    }
    static double area(double r)
    {
        return 3.141*r*r;
    }
    public static void main(String args[])
    {
        double shapearea,a,b,c;
        Scanner scn=new Scanner(System.in);
        System.out.println("Choice-------------Shape");
        System.out.println("1-------------Triangle");
        System.out.println("2-------------Rectangle");
        System.out.println("3-------------Circle");
        int choice;
        choice=scn.nextInt();
        switch(choice)
        {
        case 1:
            System.out.println("Enter the 3 sides : ");
    
             a=scn.nextDouble();
            
b=scn.nextDouble();
         
c=scn.nextDouble();
            System.out.println("The area of the triangle is : " + area(a,b,c));
            break;
        case 2:
            System.out.println("Enter the 2 sides : ");
  
a=scn.nextDouble();
        
b=scn.nextDouble();
            System.out.println("The area of the triangle is : " + area(a,b));
            break;
        case 3:
            System.out.println("Enter the radius : ");
          
a=scn.nextDouble();
            System.out.println("The area of the triangle is : " + area(a));
            break;
        }
    }
}
