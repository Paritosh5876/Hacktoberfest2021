import java.util.Scanner;
public class PositiveNegative{

	public static void check(int num){
	if(num>0){
		System.out.println("You entered a positive number.");
	}else if(num<0){
		System.out.println("You entered a negative number.");
	}else{
		System.out.println("You entered zero.");
	}
}

	public static void main(String[]args){
		int y;
		Scanner s = new Scanner(System.in);
		System.out.print("Enter a number:");
		y = s.nextInt();
		check(y);
	}
}
		

	
		
