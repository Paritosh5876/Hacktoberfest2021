import java.util.function.Function;
public class FunctionInterface {
    public static void main(String args[]) {
      Function<Integer,Boolean> findPrime = (x) -> {
          if(x <= 1){
              return false;
          }
          if(x==2 || x==3){
              return true;
          }
          if(x%2 == 0){
              return false;
          }
          for(int i=3;i<=Math.sqrt(x);i+=2){
              if(x%i == 0){
                  return false;
              }
          }
          return true;
      };
      System.out.println(findPrime.apply(3));
      System.out.println(findPrime.apply(7));
      System.out.println(findPrime.apply(11));
      System.out.println(findPrime.apply(19));
      System.out.println(findPrime.apply(21));
      System.out.println(findPrime.apply(53));
    }
}

//OUTPUT OF PROGRAM IS
// true
// true
// true
// true
// false
// true
