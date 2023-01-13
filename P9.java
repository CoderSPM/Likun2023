
class P9
{

    public static void main(String args[])
    {
       for(int a=0,b=1,i=0;i<5;i++)
       {      int sum = a+b;
               System.out.print(a + " " + b + " ");
               a = sum;
               b = sum + b;
             
       }
        
    }
}
