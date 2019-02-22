import java.util.Scanner;
import java.io.*;
class D{
	int s=0;
	public int result(int b1,int w1,int bc1,int wc1,int z1,int m1)
	{
		if(bc1==wc1)
		s=(b1*bc1)+(w1*wc1);
		else{
			if(z1>=m1)
			s=(b1*bc1)+(w1*wc1);
			else
				{
				if(bc1>=(wc1+z1))
				s=((b1+w1)*wc1 + b1*z1);
				else
				s=((b1+w1)*bc1 + w1*z1);
				}
			}
			return s;
	}
}
class A
{
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		D d=new D();
		int t=sc.nextInt();	
		for(int i=0; i<t; i++)
		{
		int b=sc.nextInt();
		int w=sc.nextInt();
		int bc=sc.nextInt();
		int wc=sc.nextInt();
		int z=sc.nextInt();
		int s1=0;
		int m=Math.abs(bc - wc);
		if(b==w)
		s1=d.result(b,w,bc,wc,z,m);
		if(b>w)
		s1=d.result(b,w,bc,wc,z,m);
		if(b<w)
		s1=d.result(b,w,bc,wc,z,m);	
		System.out.println(s1);
		}
	}
}
	
		