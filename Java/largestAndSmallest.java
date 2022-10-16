import java.util.*;

public class Main
{
	public static void main(String[] args) {
		Scanner s=new Scanner(System.in);
		int n=s.nextInt();
		int a[]=new int[n];
		for(int i=0;i<n;i++){
		    a[i]=s.nextInt();
		}
		int max=Integer.MIN_VALUE;
		int min=Integer.MAX_VALUE;
		for(int i=0;i<n;i++){
		    if(a[i]<min){
		        min=a[i];
		    }else if(a[i]>max){
		        max=a[i];
		    }
		}
		System.out.println("The min is:"+ min +" and max is:"+ max);
	}
}
