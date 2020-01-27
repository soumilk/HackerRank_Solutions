import java.util.Scanner;
class Sequence_Equation{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		int n;
		n=sc.nextInt();
		int a[]=new int[n];
		for(int i=0;i<n;i++)
		{
			a[i]=sc.nextInt();
		}
		for(int x=1;x<=n;x++)
		{
			for(int i=0;i<n;i++)
			{
				if(x==a[i])
				{
					int j=i+1;
					for(int m=0;m<n;m++)
					{
						if(j==a[m])
						{
							int k=m+1;
							System.out.println(k);
						}
						
					}
				}
			}
		}
	}
}