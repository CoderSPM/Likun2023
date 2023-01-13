import java.util.Scanner;
class P2
{

    public static void main(String args[])
    {
       Scanner scn = new Scanner(System.in);
       System.out.print("Enter the day no. of the week : ");
       int dayno;
       dayno = scn.nextInt();
       if(dayno==1)
       {
           System.out.println("It is Sunday");
       }
       if(dayno==2)
       {
           System.out.println("It is Monday");
       }
       if(dayno==3)
       {
           System.out.println("It is Tuesday");
       }
       if(dayno==4)
       {
           System.out.println("It is Wednesday");
       }
       if(dayno==5)
       {
           System.out.println("It is Thursday");
       }
       if(dayno==6)
       {
           System.out.println("It is Friday");
       }
       if(dayno==7)
       {
           System.out.println("It is Saturday");
       }
    }
}
