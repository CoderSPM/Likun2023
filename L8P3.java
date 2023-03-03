import java.util.Scanner;
interface city
{
    void showcity();
}
interface district extends city
{
    void showdistrict();
}
interface state extends district
{
    void showstate();
}
interface country extends state
{
    void showcountry();
}
interface check
{
    
}
class Location implements country,check
{
    String c,d,s,cn;
    Location(String ct,String dst,String st,String cntr)
    {
        c=ct;
        d=dst;
        s=st;
        cn=cntr;
    }
    public void showcity()
    {
        System.out.println("City : " + c);
    }
    public void showdistrict()
    {
        System.out.println("District : " + d);
    }
    public void showstate()
    {
        System.out.println("State : " + s);
    }
    public void showcountry()
    {
        System.out.println("Country : " + cn);
    }
}
public class L8P3
{
    public static void main(String args[])
    {
        Scanner scn = new Scanner(System.in);
        String ct,ds,sts,cnny;
        System.out.print("Enter the city : ");
        ct=scn.nextLine();
        System.out.print("Enter the district : ");
        ds=scn.nextLine();
        System.out.print("Enter the state : ");
        sts=scn.nextLine();
        System.out.print("Enter the country : ");
        cnny=scn.nextLine();
        Location l = new Location(ct,ds,sts,cnny);
        l.showcity();
        l.showdistrict();
        l.showstate();
        l.showcountry();
    }
}
