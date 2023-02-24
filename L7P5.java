import java.util.Scanner;
class Captain
{
    String capname;
    public void displayC()
    {
        System.out.println("Captain : " + capname);
    }
}
class soldier1 extends Captain
{
    
    private String name;
    public void displayS1()
    {
        System.out.println("Soldier 1 : " + name);
    }
}
class soldier2 extends Captain
{
    
    private String name;
    soldier2(String n, String cap)
   {
      name = n;
      capname=cap;
}
    public void displayS2()
    {
        System.out.println("Soldier 2 : " + name);
    }
}
class L7P5
{
    public static void main(String args[])
    {
        soldier1 s1 = new soldier1("Suraj","Swayam");
        soldier2 s2 = new soldier2("Tushar","Suraj");
        s1.displayS1();
       s1.displayC();
       s2.displayS2();
       s2.displayC();
    }
}
