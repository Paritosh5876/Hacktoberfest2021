import java.util.*;

class Main{
    public static void main (String[] args) {
        
        Scanner sc=new Scanner(System.in);
        String s1,s2;
        s1=sc.nextLine();
        s2=sc.nextLine();
        
        StringBuilder sb1 = new StringBuilder();
        s1.chars().distinct().forEach(c -> sb1.append((char) c));
        StringBuilder sb2 = new StringBuilder();
        s2.chars().distinct().forEach(c -> sb2.append((char) c));
        
        String s3,s4;
        s3=sb1.toString();
        s4=sb2.toString();
        char[] c1=s3.toCharArray();
        char[] c2=s4.toCharArray();
        
        Arrays.sort(c1);
        Arrays.sort(c2);
        
        if(Arrays.equals(c1,c2))
            System.out.println("Same");
        else
            System.out.println("Different");
    }
}
