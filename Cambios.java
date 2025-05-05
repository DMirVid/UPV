/*Problem: 1896A */
import java.util.Scanner;

public class Cambios{
    public static void main(String[] args) {
       Scanner teclado = new Scanner(System.in);
       int t;
       t = teclado.nextInt(); 
        for (int i = 0 ; i< t; i++){
            int n;
            n = teclado.nextInt();
            int[] lista = new int[n];
            for (int j = 0; j< n; j++ ){
                lista[j] = teclado.nextInt();
            }
            int q = 0;
            boolean z = false;
            while(q <50 && !z){
            for (int k = 1; k< n-1; k++){
                if (isSort(lista)){
                    System.out.println("YES");
                    z = true;
                    break;
                
                } if(lista[k] > lista[k+1]){
                    int aux2 = lista[k];
                    lista[k] = lista[k+1];
                    lista[k+1] = aux2;
                }
            
            }
            q++;
        }
        if (!isSort(lista))System.out.println("NO");
        }
        teclado.close();
    }
    public static boolean isSort(int[] x){
        for (int i = 0; i< x.length-1;i++){
            if(x[i] > x[i+1]) return false;
        }
        return true;
    }
   
}