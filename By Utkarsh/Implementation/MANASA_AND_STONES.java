import java.util.Scanner;
class Manasa_and_Stones{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        for(int j=0;j<t;j++)
        {
            long ans=0;
            int n=sc.nextInt();
            int a=sc.nextInt();
            int b=sc.nextInt();
            for(int i=n;i>0;i--)
            {   if(a<b)
                    { 
                    	ans=a*(i-1) + b*(n-i);
                    	System.out.print(ans+ " ");
                    }
                else if(a==b)
                	{
                		ans=a*(i-1) + b*(n-i);
                		System.out.print(ans+ " ");
                		break;
                	}
                else
                    {
                    	ans=b*(i-1) + a*(n-i);
                    	System.out.print(ans+ " ");
                    }
            }
            System.out.println();
        }
    }
    
}

