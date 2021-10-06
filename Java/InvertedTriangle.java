import java.util.*;
public class InvertedPyramid 
{
		public static void main(String[] args)
		{
		Scanner in=new Scanner(System.in);
		System.out.println("Enter N : ");
		int n=in.nextInt(); 
		System.out.print("Enter Symbol : "); 
		char c = in.next().charAt(0);
		for(int i=n;i>0;i--)
		{
		 
		for(int j=1;j<=n-i;j++)
		 
		{
		System.out.print(" ");
		}
		if(i==1 || i==n)
		for(int j=1;j<=i*2-1;j++)
		 
		{
		System.out.print(c);
		}
		else
		{
		for(int j=1;j<=i*2-1;j++)
		 
		{ 
		if(j==1 || j==i*2-1)
		System.out.print(c);
		else
		 
		System.out.print(" ");
		}
		}
		System.out.println();
		} 
		}
		}
//Contributed by Ashwin V Kumar,KMM College of Arts and SCience//