import java.util.Scanner;
class Chocolate_Feast{
    public static void main(String args[]){
    Scanner sc=new Scanner(System.in);
    int t=sc.nextInt();
    for(int i=0;i<t;i++)
    {
        int n=sc.nextInt();
        int c=sc.nextInt();
        int m=sc.nextInt();
        int a=n/c;
        int f=0;
        boolean flag=true;
        while(flag==true)
        {    
            
            if(a>=m)
            {    
                int x=0;    
                if(a%m!=0)
                {
                    x=a/m;
                    a=x+a%m;
                    f+=x;
                    flag=true;
                }
                else
                {
                    x=a/m;
                    a=x;
                    f+=x;
                    flag=true;
                }
            }
            else
                flag=false;
        }
        System.out.println(n/c+f);
        
    }
    }
    
}