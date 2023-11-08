// Java program to Decimal to binary conversion
// using bitwise operator
class dtb {
	// Function that convert Decimal to binary
	public void decToBinary(int n)
	{
		// Size of an integer is assumed to be 32 bits
		for (int i = 31; i >= 0; i--) {
			int k = n >> i;
			if ((k & 1) > 0)
				System.out.print("1");
			else
				System.out.print("0");
		}
	}
}

class db {
	public static void main(String[] args)
	{
		dtb g = new dtb();
		int n = 32;
		g.decToBinary(n);
	}
}

