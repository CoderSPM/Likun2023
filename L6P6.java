import java.util.Scanner;
class student
{
    String name;
    long regd;
    String branch;
    double marks;
    student()
    {
        name="Unknown";
        regd=0000000000;
        branch="UNK";
        marks=0;
    }
    public void input(String n,long r,String b,double m)
    {
        name=n;
        regd=r;
        branch=b;
        marks=m;
    }
    public void display()
    {
        System.out.println("Name : " + name);
        System.out.println("Registration No. : " + regd);
        System.out.println("Branch : " + branch);
        System.out.println("Marks : " + marks);
    }
}
class L6P6
{
    public static void main(String args[])
    {
        String n;
        long r;
        String b;
        double m;
        Scanner scn = new Scanner(System.in);
        student s = new student();
        System.out.println("Enter the Name : ");
        n=scn.nextLine();
        System.out.println("Enter the registration number : ");
        r=scn.nextLong();
        scn.nextLine();
        System.out.println("Enter the Branch : ");
        b=scn.nextLine();
        System.out.println("Enter the Marks : ");
        m=scn.nextDouble();
        s.input(n,r,b,m);
        s.display();
    }
}
