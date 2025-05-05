import java.util.Scanner;

public class Hilos {
    public static void main(String[] args) {
        Scanner teclado = new Scanner(System.in);
        int n = teclado.nextInt();
        while (n>0){
            int a = teclado.nextInt();
            int b = teclado.nextInt();
            int c = teclado.nextInt();       
            
            if (divid(a,b,c,3)){
                System.out.println("YES");
            }else {
                System.out.println("NO");
            }
            n--;
        }
    }
}
public static boolean divid(int a, int b, int c, int cont){
    if(cont == 0)return false;
    if (a==b && b==c){
        return true;
    }else {
        
    }
}

