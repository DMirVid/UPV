import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class Dia15 {
    public static void main(String[] args) {
        String fichero = "input15.txt";
        File fich = new File(fichero);
        try{
            Scanner entrada = new Scanner(fich);
            int suma = 0;
            String[] datos = entrada.next().split(",");
            for (int i = 0; i<datos.length; i++){
                int sum = 0;
                for (int j = 0; j< datos[i].length(); j++){
                    sum  += datos[i].charAt(j);
                    sum = sum * 17;
                    sum = sum % 256;
                }
                suma += sum;
            }
        
        System.out.println(suma);
            entrada.close();

        }catch(FileNotFoundException e) {
            System.err.println("Problemas al abrir  " + fichero);
        }
    }
}
