import java.util.Scanner;
private class student
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
    public display()
    {
        System.out.println("Name : " + name);
        System.out.println("Registration No. : " + regd);
        System.out.println("Branch : " + branch);
        System.out.println("Marks : " + marks);
    }
}
class L6P7
{
    public static void main(String args[])
    {
        Scanner scn = new Scanner(System.in);
        student s = new student();
        System.out.println("Enter the Name : ");
        s.name=scn.nextLine();
        System.out.println("Enter the registration number : ");
        s.regd=scn.nextLong();
        System.out.println("Enter the Branch : ");
        s.branch=scn.nextLine();
        System.out.println("Enter the Name : ");
        s.marks=scn.nextDouble();
        s.display();
    }
}
