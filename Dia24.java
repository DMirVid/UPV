import java.io.*;
import java.util.Scanner;

public class Dia24 {
    public static void main(String[] args) {
        String fichero = "inputx.txt";
        File fich = new File(fichero);
        try{
            double limitex =7;// 2.0e14;
            double limitey =27; // 4.0e14;
            int a = 5, b = 6;
            Scanner entrada = new Scanner(fich);
            String[][] datos = new String[a][b];
            Double[][] datosn = new Double[a][b];
            int i = 0;
            while(entrada.hasNextLine()){ //Obtención de los datos 
                int t = 0;
                datos[i] = entrada.nextLine().split("[,@ ]");
                for (int j = 0; j<datos[i].length;j++){
                    if (datos[i][j].equals("")){
                        t++;
                    }else{
                        datosn[i][j-t] = Double.parseDouble(datos[i][j]);
                    }
                }
                i++;
            }
            double m1, m2, indepe1, indepe2;
            double interx, intery;
            int suma = 0;
            for( i = 0; i<datosn.length;i++){
                m1 = datosn[i][1] - (datosn[i][0] *datosn[i][4] / datosn[i][3]);
                    indepe1 = datosn[i][4] / datosn[i][3];
                for (int j = i+1; j<datosn.length;j++){
                    m2 = datosn[j][1] - (datosn[j][0] *datosn[j][4] / datosn[j][3]);
                    indepe2 = datosn[j][4] / datosn[j][3];
                    if (m1 == m2){
                        break;
                    }else{
                        interx = (-indepe1 +indepe2)/(m1 -m2);
                        intery = m1 * interx + indepe1;
                    }
                    if (interx> limitex || intery >limitey 
                        || interx < datosn[i][0] || limitey < datosn[i][1]){
                        break;
                    }else{
                        suma++;
                    }
                }
            } 
            System.out.println(suma);
            entrada.close();
        }catch(FileNotFoundException e) {
            System.err.println("Problemas al abrir  " + fichero);
        }
    }
}
