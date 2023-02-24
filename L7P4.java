import java.util.Scanner;
class parent
{
    
    public void displayp()
    {
        System.out.println("This is base");
    }
}
class child extends parent
{
    
    
    public void displayc()
    {
        System.out.println("This is child");
    }
}
class grandchild extends child
{
    
    
    public void displayg()
    {
        System.out.println("This is grandchild");
    }
}
class L7P4
{
    public static void main(String args[])
    {
        grandchild ob = new grandchild();
        System.out.println("Multilevel Inheritane");
        ob.displayp(); 
        ob.displayc(); 
        ob.displayg(); 
    }
}
