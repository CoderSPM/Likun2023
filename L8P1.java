abstract class A1
{   
    void show()
    {
        System.out.println("The value of declared variable is : " + a);
    }
}
class C1 extends A1
{
    int a=5;
    

}
class L8P1
{
    public static void main(String args[])
    {
        C1 obj=new C1();
        obj.show();
    }
}
