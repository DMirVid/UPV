import java.util.Locale;
import java.util.Scanner;

public class bS3 {
    public static void main(String[] args) {
        Scanner t = new Scanner(System.in);
        String[] s = t.nextLine().split(" "); 
        int a, b; 
        a = Integer.parseInt(s[0]);
        b = Integer.parseInt(s[2]);
        switch (s[1]) {
            case "+":
                System.out.println(a+b);
                break;
            case "-":
                System.out.println(a-b);
                break; 
            case "*":
                System.out.println(a*b);
                break;
            case "/":
                if (b == 0){
                    System.out.println("ERROR");
                }else{
                    double x = a;
                    double y = b; 
                    System.out.printf(Locale.US, "%.2f",x/y);
                }
                break;
            default:
                break;
        }
        t.close(); 
    }
} 
