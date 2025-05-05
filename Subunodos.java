import java.util.Scanner;

public class Subunodos { // Tiene que ser substrings, no la sunma en total
    public static void main(String[] args) {
        Scanner teclado = new Scanner(System.in);
        int t = teclado.nextInt(); 
        for (int i = 0; i< t; i++){
            int n = teclado.nextInt();
            int q = teclado.nextInt();
            int[] list = new int[n];
            int cont1 = 0;
            int cont2 = 0;
            for (int j = 0; j< n; j++){
                list[j] = teclado.nextInt();
                if (list[j] ==1){
                    cont1++;
                }else{
                    cont2++;
                }
            }
            for (int k = 0; k<q; k++){
                int info = teclado.nextInt();
                switch (info) {
                    case 1:
                        int x = teclado.nextInt();
                        if (){
                            System.out.println("YES");
                        }else {
                            System.out.println("NO");
                        }
                        break;
                    case 2:
                        int d = teclado.nextInt();
                        int f = teclado.nextInt();
                        if (list[d] != f){
                            if (f == 2){
                                cont2++;
                                cont1--;
                            }
                            else{
                                cont1++;
                                cont2--;
                            }
                            list[d] = f;
                        }
                        break; 
                    default:
                        break;
                }
            }
        }
        teclado.close();
    }
}
