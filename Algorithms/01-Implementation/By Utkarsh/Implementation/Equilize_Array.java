import java.util.*;
import java.io.*;
class Equilize_Array{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int a[]=new int[n];
        for(int i=0;i<n;i++)
        a[i]=sc.nextInt();
        Arrays.sort(a);
        int max=0;
        for(int i=0;i<n;i++)
        {    int count=0;
            for(int j=i;j<n;j++)
            {
                if(a[i]==a[j])
                {
                    count++;
                    
                }
                else
                {
                break;
                }
            }
            if(count>max)
            max=count;
        }
        System.out.println(Math.abs(n-max));
        
    }
}

