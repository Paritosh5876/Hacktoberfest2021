package RegExDemo;
import java.util.regex.*;

public class Valid_Invalid_mailID {
    public static void main(String[] args) {
        Pattern p = Pattern.compile("[a-zA-Z0-9][a-zA-Z0-9._]*@[a-zA-Z0-9]+([.][a-zA-z]+)+");  // regex for valid mail id
        Matcher m = p.matcher(args[0]);
        if(m.find() && m.group().equals(args[0])){
            System.out.println("Valid mail id");
        }
        else{
            System.out.println("Invalid mail id");
        }
    }
}
