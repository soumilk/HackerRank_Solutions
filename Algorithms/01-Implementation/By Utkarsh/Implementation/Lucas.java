
class Lucas
{
	public static void main(String args[]) throws Exception
	{
		int i=0;
		int a=0,b=1,c=1;
		System.out.print("0	1	1	");
		while(i<10)
		{
			int d=a+b+c;
			a=b;
			b=c;
			c=d;
			System.out.print(d + "\t");
			i++;
		}
		
}
}