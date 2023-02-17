class L6P4
{
    public static void main(String args[])
    {
        int a[]=new int[args.length];
        int sum=0;
        for(int i=0;i<args.length;i++)
        {
            a[i]=Integer.parseInt(args[i]);
            sum+=a[i];
        }
        System.out.println("The sum of inputted numbers are : " + sum);
    }
}
