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
    student(String n,long r,String b,double m)
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
class L7P2
{
    public static void main(String args[])
    {
        char ch;
        Scanner scn = new Scanner(System.in);
        System.out.println("Enter s for system default and c for college default :  ");
        ch = scn.next().charAt(0);

        if(ch=='s')
        {
            student s = new student();
            s.display();
        }
        else if(ch=='c')
        {
            student s = new student("Name",2301009,"BRN",00);
            s.display();
        }


    }
}
