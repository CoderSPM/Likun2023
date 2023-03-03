import java.util.Scanner;
interface price
{
    void show1();
}
interface model
{
    void show2();
}
class computer implements price,model
{
    String Modelname;
    double Price;
    public void input()
    {
        Scanner scn = new Scanner(System.in);
        System.out.print("Enter the Model Name : ");
        Modelname=scn.nextLine();
        System.out.print("Enter the price : ");
        Price=scn.nextDouble();
        scn.nextLine();
    }
    public void show1()
    {
        System.out.println("Price : " + Price);
    }
    public void show2()
    {
                System.out.println("Model Name : " + Modelname);
    }
}
public class L8P2
{
    public static void main(String args[])
    {
        computer pc = new computer();
        pc.input();
        pc.show1();
        pc.show2();

    }
}