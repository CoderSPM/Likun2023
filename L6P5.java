import java.util.Scanner;
class L6P5
{
    public static void main(String args[])
    {
        Scanner scn = new Scanner(System.in);
        int i=Integer.parseInt(args[0]);
        int j=Integer.parseInt(args[1]);
        int n=Integer.parseInt(args[2]);
        int a[]=new int[n];
        System.out.println("The array in required range is : " + i + " to " + j);
        System.out.println("Enter the elements in the array : ");
        for(int p=0;p<n;p++)
        {
            a[p]=scn.nextInt();
        }
        while(i<=j)
        {
            System.out.print(a[i] + " ");
            i++;
        }
    }
}
