import java.util.Scanner;
import java.util.Arrays;
class Cut_the_sticks{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int n = sc.nextInt();
        int a[]=new int[n];
            for(int i=0;i<n;i++)
        {
            a[i]=sc.nextInt();
        }
        int count=n;
        Arrays.sort(a);
        int b[]=new int[n];
        for(int i=0;i<n;i++)
        b[i]=a[i];
    
    
        
        for(int i=0;i<n;i++)
        {   int m=0;
            System.out.println(count);
            for(int j=i;j<n;j++)
            {
                b[j]=b[j]-a[i];
                if(b[j]==0)
                {count=count-1;
                m=m+1;}
                
            }
            for(int k=0;k<n;k++)
            a[k]=b[k];
            if(m>1)
            i=i+(m-1);
                
        }
    }
}    

        
        
    
        
    

