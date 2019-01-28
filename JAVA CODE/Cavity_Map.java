import java.util.Scanner;
class Cavity_Map{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        String s[]=new String[n];
        for(int i=0;i<n;i++)
        s[i]=sc.next();
        int m=0;
        char c[][]=new char[s.length][s[0].length()];
        for(String a : s)
        {
            c[m]=a.toCharArray();
            m++;
        }
        for(int i=1;i<s.length-1;i++)
        {
            for(int j=1;j<s[0].length()-1;j++)
            {if(c[i][j]>c[i-1][j] && c[i][j]>c[i+1][j] && c[i][j]>c[i][j-1] && c[i][j]>c[i][j+1])
                c[i][j]='X';
            }
        }
        
        for(int i=0;i<s.length;i++)
        {
            for(int j=0;j<s[0].length();j++)
            System.out.print(c[i][j]);
            System.out.println();
        }
        
    }
}