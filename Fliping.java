/*Problem: 1896B  */
import java.util.Scanner;

public class Fliping{
    public static void main(String[] args) {
        Scanner teclado = new Scanner(System.in);
        int t = teclado.nextInt(); 
        for (int i = 0; i< t; i++){
            int n = teclado.nextInt();
            int operaciones = 0;
            char[] lis = teclado.next().toCharArray();
            boolean pri = true; 
            int hasta = n-1; 
            for (int j = n-1; j>=0; j--){
                char c = lis[j];
                if (c=='B' && pri){
                    pri = false; 
                    hasta = j;   
                }    
                if (c=='A' && !pri){
                    operaciones += hasta -j; 
                    hasta = j; 
                }
            }
           
            System.out.println(operaciones);
        }
        teclado.close();
    }
}