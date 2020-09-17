import java.util.Scanner;
class Test
{
	public static void main(String[] args)
	{
		name n=new name();
		n.polygon(4,'#');
		n.polygon(2,4);
		n.polygon();
	}
}
class name
{
	void polygon(int n, char ch)
	{
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				System.out.print(ch);
			}
			System.out.println();
		}
	}
	void polygon(int x, int y)
	{
		for(int i=0;i<x;i++)
		{
			for(int j=0;j<y;j++)
			{
				System.out.print("@");
			}
			System.out.println();
		}
	}
	void polygon()
	{
		for(int i=0;i<5;i++)
		{
			for(int j=0;j<=i;j++)
			{
				System.out.print("*");
			}
			System.out.println();
		}
	}
}
