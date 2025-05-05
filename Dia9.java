import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class Dia9 {
    public static void main(String[] args) {
        String fichero = "input9.txt";
        File fich = new File(fichero);
        try{
            Scanner entrada = new Scanner(fich);
            int suma = 0;
            while(entrada.hasNextLine()){
                String[] linea = entrada.nextLine().split(" ");
                int [] datos = new int[linea.length];
                for (int i = 0; i< linea.length; i++){
                    datos[i] = Integer.parseInt(linea[i]);
                }
                suma += datos[0] - frev(datos);
            }
            System.out.println(suma);
            entrada.close();
        }catch(FileNotFoundException e) {
            System.err.println("Problemas al abrir  " + fichero);
        }
    }
    public static int f(int[] a){
        if (a[a.length-1] == 0){
            return 0;
        }else{
            int[] aux = new int[a.length-1];
            for (int j = 0; j< aux.length; j++){
                aux[j] = a[j+1] - a[j];
            }
            return a[a.length-1] + f(aux);
        }
    }
    public static int frev(int[] a){
        if (a[a.length-1] == 0){
            return 0;
        }else{
            int[] aux = new int[a.length-1];
            for (int j = 0; j< aux.length; j++){
                aux[j] = a[j+1] - a[j];
            }
            return aux[0] - frev(aux);
        }
    }
}
