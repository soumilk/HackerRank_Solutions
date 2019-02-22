import java.util.Scanner;
import java.util.Arrays;
class LadyBugs{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int g=sc.nextInt();
            for(int i=0;i<g;i++)
            {    
                boolean flag=false;
                int n=sc.nextInt();
                String b=sc.next();
                if(b.charAt(0)=='_' || n>1 )
                {
                char ch[]=b.toCharArray();
                int arr[]=new int[26];
                int u=0;
                for(int j=0;j<b.length();j++)
                {
                    if(ch[j]=='_')
                    u++;    
                    else 
                    arr[ch[j]-65]++;
                }
                Arrays.sort(arr);
                if(u==b.length())
                {
                    //flag=true;
                    System.out.println("YES");
                }
                else if(u>0 && u<b.length())                
                    {
                        for(int k=25;k>0;k--)
                        {
                            if(arr[k]==1)
                            {
                                flag=true;
                                break;
                            }
                        }
                        if(flag==true)
                        System.out.println("NO");
                        else
                        System.out.println("YES");
                    }
                else 
                {    if(ch[0]!=ch[1] || ch[b.length()-2]!=ch[b.length()-1])
                    System.out.println("NO");
                    else
                    {
                    for(int m=1;m<b.length()-1;m++)
                    {
                        if(ch[m]==ch[m-1] || ch[m]==ch[m+1])
                        flag=true;
                        else
                        flag=false;
                    }    
                    if(flag==true)
                    System.out.println("YES");
                    else
                    System.out.println("NO");
                }    }    
        
    }
    else
    System.out.println("NO");
    }
}
}

