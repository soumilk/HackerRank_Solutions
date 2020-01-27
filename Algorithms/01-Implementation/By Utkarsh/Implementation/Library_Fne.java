import java.util.Scanner;
class Library_fine{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		int d1=sc.nextInt();
		int m1=sc.nextInt();
		int y1=sc.nextInt();
		int d2=sc.nextInt();
		int m2=sc.nextInt();
		int y2=sc.nextInt();
		long hackos=0;
		if((y1-y2)>0)
		hackos+=10000;
		else if((m1-m2)>0 && y1-y2==0)
		hackos+=500*(m1-m2);
		else if(d1-d2>0 && m1-m2==0 && y1-y2==0)
		hackos+=15*(d1-d2);
		System.out.println(hackos);
		
		
		
	}
}