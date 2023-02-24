import java.util.Scanner;
class prvtdetails
{
    String aadhar;
    String PAN;
    public void displayprvt()
    {
        System.out.println("Aadhar : " + aadhar);
        System.out.println("PAN : " + PAN);
    }
}
class pblcdetails extends prvtdetails
{
    String name;
    String address;
    pblcdetails(String n,String a,String p,String adh)
{
name=n;
address=a;
PAN=p;
aadhar=adh;
}
    public void displaypblc()
    {
        System.out.println("Name : " + name);
        System.out.println("Address : " + address);    }
}
class L7P3
{
    public static void main(String args[])
    {
        char ch;
        String a,p,n,addr;
        Scanner scn = new Scanner(System.in);
        System.out.println("Enter aadhar  ");
        a=scn.nextLine();
        System.out.println("Enter PAN  ");
        p=scn.nextLine();
        System.out.println("Enter Name  ");
        n=scn.nextLine();
        System.out.println("Enter address  ");
        addr=scn.nextLine();
        pblcdetails ob=new pblcdetails(n,addr,p,a);
        ob.displaypblc();
        ob.displayprvt();
    }
}
