import java.util.*;
class VolumeOfCone
{
    public static void main(String args[])
    {
        double radius,height, pi=3.14,volume;  
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the radius of Cone : ");
        radius=sc.nextDouble();
        System.out.println("Enter the height of Cone : ");
        height=sc.nextDouble();
        volume=(1/3.0)*pi*radius*radius*height;
        System.out.print("Radius of the cone is"+radius);
        System.out.println("and Height of the cone is"+height);
        System.out.println("Volume of the cone is"+volume);
    }
}
