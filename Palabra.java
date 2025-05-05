import java.util.Scanner;
public class Palabra{
    public static void main(String[] args){
        Scanner teclado = new Scanner(System.in);
        String s = teclado.nextLine();
        int n = s.length();
        int mayus = 0;
        int min = 0;
        for (int i = 0; i<n; i++){
            if (s.charAt(i) >96){
                min++;
            }else{
                mayus++;
            }
        }
        if(mayus > min){
            s = s.toUpperCase();
        }else{
            s =  s.toLowerCase();
        }
        System.out.println(s);
        teclado.close();
    }
}
