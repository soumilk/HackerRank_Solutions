import java.util.Scanner;
class ACM_ICPC_TEAM{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int m=sc.nextInt();
        String s[]=new String[n];
        for(int i=0;i<n;i++)
        s[i]=sc.next();
        char ch[][] = new char[n][m];
        int f=0;
        for(String a : s)
        {
            ch[f]=a.toCharArray();
            f++;
        }
        int c[]=new int[n*m];
        int l=0;
        for(int i=0;i<n-1;i++)
        {    
            for(int j=i+1;j<n;j++)
            {    int count=0;
                for(int k=0;k<m;k++)
                {
                    if(ch[i][k]=='1' || ch[j][k]=='1')
                    count++;
                }
                c[l]=count;
                l++;
            }
        }
        int z=l;
        int max=c[0];
        for(int i=1;i<z;i++)
        {
            if(c[i]>max)
            max=c[i];
        }
        int count1=0;
        for(int i=0;i<z;i++)
            {
                if(c[i]==max)
                count1++;
            }
        System.out.println(max);
        System.out.println(count1);
}
}