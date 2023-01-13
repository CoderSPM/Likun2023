import java.util.Scanner;
class P1
{

    public static void main(String args[])
    {
       Scanner scn = new Scanner(System.in);
       System.out.print("Enter the mark : ");
       double marks;
       marks = scn.nextDouble();
       if((marks<=100)&&(marks>=90))
       {
           System.out.println("The grade is : O");
       }
       else if(marks>=80)
       {
           System.out.println("The grade is : E");
       }
       else if(marks>=70)
       {
           System.out.println("The grade is : A");
       }
       else if(marks>=60)
       {
           System.out.println("The grade is : B");
       }
       else if(marks>=50)
       {
           System.out.println("The grade is : C");
       }
       else if(marks>=40)
       {
           System.out.println("The grade is : D");
       }
      else
       {
           System.out.println("!!!FAIL!!!");
       }
    }
}

