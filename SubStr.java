import java.util.Scanner;

public class SubStr {
    public static void main(String[] args) {
        Scanner teclado = new Scanner(System.in);
        int test = teclado.nextInt();
        int i = test;
        while (test>0){
            int cont = 0;
            
            String n =teclado.nextLine();
            n = n+n;
            if (test == i) {String l = teclado.nextLine();}
            String s1 = teclado.nextLine();

            String s2 = teclado.nextLine();
            
            while (!s1.contains(s2) && cont<7){
                s1 = s1+ s1;
                cont++;
            }
            if (cont>=6){System.out.println(-1);}
            else {
                System.out.println(cont);
            }
            test--;
        
        }
    teclado.close();
    }
}
