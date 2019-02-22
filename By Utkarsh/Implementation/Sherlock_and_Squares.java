import java.util.Scanner;
import java.math.*;
class Sherlock_and_Squares{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        for(int j=0;j<t;j++)
        {
            double n=sc.nextInt();
            double m=sc.nextInt();
            double a=Math.sqrt(n);
            a=Math.floor(a);
        //    System.out.println(a);
            double b=Math.sqrt(m);
            b=Math.floor(b);
        //    System.out.println(b);
            int count=0;
        
            for(double i=a;i<=b;i++)
            {
                double k=i*i;
                if(k>=n && k<=m)
                {count++;
            }
            }    
            System.out.println(count);
        }
        }
}
