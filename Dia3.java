import java.io.*;
import java.util.Scanner;

public class Dia3 {
    public static void main(String[] args) {
        String fichero = "input3.txt";
        File fich = new File(fichero);
        int suma = 0;

        try{
            Scanner entrada = new Scanner(fich);
            int i = 0;
            String[][] s = new String[140][140];
            int[][] pos = new int[140][140];
            while(entrada.hasNextLine()){
                s[i] = entrada.nextLine().split("");
                for(int t = 0; t<s[i].length;t++){
                    if (s[i][t].matches("[|@#$%&/=+-]")){
                        pos[i][t] = 1;
                    }else if (s[i][t].matches("[*]")) {
                        pos[i][t] = 2;
                    }else {
                         pos[i][t] = 0;
                    }
                }
                i++;
            }
            entrada.close();
            
            for (int j = 0; j <s.length; j++){
                for (int k = 0; k <s[j].length; k++){
                    if (pos[j][k] == 3){ //Para parte 1 igualar a 1
                        int auxj = 0, auxk = 0;
                        if (k!=0 && !(s[j][k-1].equals("."))){ // izquierda
                            auxj = j; auxk = k-1;
                            int ex = 1;
                            while(auxk!=-1 &&!(s[auxj][auxk].equals("."))){
                                suma += ex * Integer.parseInt(s[auxj][auxk]);
                                ex = 10* ex;
                                auxk--;
                            }
                        } 
                        if (k != 139 && !(s[j][k+1].equals("."))){ // derecha
                            auxj = j; auxk = k+1;
                            double ex = 1;double x =0;
                            while(!(s[auxj][auxk].equals("."))){
                                x++;
                                auxk++;
                            }
                            auxk = k+1;
                            ex = Math.pow(10, x-1);
                            while(x>0){
                                suma += ex * Integer.parseInt(s[auxj][auxk]);
                                ex = ex/10;
                                auxk++;
                                x--;
                            }
                        } 
                        if (k!=0 && j!=0 && !(s[j-1][k].equals("."))){ // Arriba 
                            auxj = j-1; auxk = k;
                            int ex = 1;
                            while(auxk!=140 &&!(s[auxj][auxk].equals("."))){
                                auxk++;
                            }
                            auxk--;
                            while(auxk!=-1 && !(s[auxj][auxk].equals("."))){
                                suma += ex * Integer.parseInt(s[auxj][auxk]);
                                ex = 10 * ex;
                                auxk--;
                            }
                        }else {
                            if (j!=0 && !(s[j-1][k-1].equals("."))){ // Arriba izq
                            auxj = j-1; auxk = k-1;
                            int ex = 1;
                            while(auxk!=-1 && !(s[auxj][auxk].equals("."))){
                                suma += ex * Integer.parseInt(s[auxj][auxk]);
                                ex = 10 * ex;
                                auxk--;
                            }
                            }  
                            if (j!=0 && k!=139 && !(s[j-1][k+1].equals("."))){ // Arriba der
                            auxj = j-1; auxk = k+1;
                            double ex = 1;double x =0;
                            while(auxk!=140 &&!(s[auxj][auxk].equals("."))){
                                x++;
                                auxk++;
                            }
                            auxk = k+1;
                            ex = Math.pow(10, x-1);
                            while(x>0){
                                suma += ex * Integer.parseInt(s[auxj][auxk]);
                                ex = ex/10;
                                auxk++;
                                x--;
                            }
                            }
                        } 
                        if (j!=139 && !(s[j+1][k].equals("."))){ // Abajo
                            auxj = j+1; auxk = k;
                            double  ex = 1; double x = 0;
                            while(auxk!=140 && !(s[auxj][auxk].equals("."))){
                                auxk++;
                                x++;
                            }
                            auxk--;
                            while(auxk!=-1 && !(s[auxj][auxk].equals("."))){
                                suma += ex * Integer.parseInt(s[auxj][auxk]);
                                ex = 10 * ex;
                                auxk--;
                            }
                        } else {
                            if (k!=0 && j!= 139 && !(s[j+1][k-1].equals("."))){ // Abajo izq
                                auxj = j+1; auxk = k-1;
                                int ex = 1;
                                while(auxk!=-1 && !(s[auxj][auxk].equals("."))){
                                suma += ex * Integer.parseInt(s[auxj][auxk]);
                                ex = 10 * ex;
                                auxk--;
                                }
                            } 
                            if (j!=139 && k!=139 && !(s[j+1][k+1].equals("."))){ // Abajo der
                                auxj = j+1; auxk = k+1;
                                double ex = 1;double x =0;
                                while(auxk!=140 &&!(s[auxj][auxk].equals("."))){
                                x++;
                                auxk++;
                                }
                                auxk = k+1;
                                ex = Math.pow(10, x-1);
                                while(x>0){
                                suma += ex * Integer.parseInt(s[auxj][auxk]);
                                ex = ex/10;
                                auxk++;
                                x--;
                                }
                            }
                        }
                    }else if (pos[j][k] == 2){ // Parte 2
                        int[] proc =new int[2];
                        int q =0;
                        int auxj = 0, auxk = 0;
                        if (k!=0 && !(s[j][k-1].equals("."))){ // izquierda
                            auxj = j; auxk = k-1;
                            int ex = 1;
                            while(auxk!=-1 &&!(s[auxj][auxk].equals("."))){
                                proc[q] += ex * Integer.parseInt(s[auxj][auxk]);
                                ex = 10* ex;
                                auxk--;
                               
                            }
                            q++;
                        } 
                        if (k != 139 && !(s[j][k+1].equals("."))){ // derecha
                            auxj = j; auxk = k+1;
                            double ex = 1;double x =0;
                            while(!(s[auxj][auxk].equals("."))){
                                x++;
                                auxk++;
                            }
                            auxk = k+1;
                            ex = Math.pow(10, x-1);
                            while(x>0){
                                proc[q] += ex * Integer.parseInt(s[auxj][auxk]);
                                ex = ex/10;
                                auxk++;
                                x--;
                            }
                            q++;
                        } 
                        if (k!=0 && j!=0 && !(s[j-1][k].equals("."))){ // Arriba 
                            auxj = j-1; auxk = k;
                            int ex = 1;
                            while(auxk!=140 &&!(s[auxj][auxk].equals("."))){
                                auxk++;
                            }
                            auxk--;
                            while(auxk!=-1 && !(s[auxj][auxk].equals("."))){
                                proc[q] += ex * Integer.parseInt(s[auxj][auxk]);
                                ex = 10 * ex;
                                auxk--;
                            }
                            q++;
                        }else {
                            if (j!=0 && !(s[j-1][k-1].equals("."))){ // Arriba izq
                            auxj = j-1; auxk = k-1;
                            int ex = 1;
                            while(auxk!=-1 && !(s[auxj][auxk].equals("."))){
                                proc[q] += ex * Integer.parseInt(s[auxj][auxk]);
                                ex = 10 * ex;
                                auxk--;
                            }
                            q++;
                            }  
                            if (j!=0 && k!=139 && !(s[j-1][k+1].equals("."))){ // Arriba der
                            auxj = j-1; auxk = k+1;
                            double ex = 1;double x =0;
                            while(auxk!=140 &&!(s[auxj][auxk].equals("."))){
                                x++;
                                auxk++;
                            }
                            auxk = k+1;
                            ex = Math.pow(10, x-1);
                            while(x>0){
                                proc[q] += ex * Integer.parseInt(s[auxj][auxk]);
                                ex = ex/10;
                                auxk++;
                                x--;
                            }
                            q++;
                            }
                        } 
                        if (j!=139 && !(s[j+1][k].equals("."))){ // Abajo
                            auxj = j+1; auxk = k;
                            double  ex = 1; double x = 0;
                            while(auxk!=140 && !(s[auxj][auxk].equals("."))){
                                auxk++;
                                x++;
                            }
                            auxk--;
                            while(auxk!=-1 && !(s[auxj][auxk].equals("."))){
                                proc[q] += ex * Integer.parseInt(s[auxj][auxk]);
                                ex = 10 * ex;
                                auxk--;
                            }
                            q++;
                        } else {
                            if (k!=0 && j!= 139 && !(s[j+1][k-1].equals("."))){ // Abajo izq
                                auxj = j+1; auxk = k-1;
                                int ex = 1;
                                while(auxk!=-1 && !(s[auxj][auxk].equals("."))){
                                proc[q] += ex * Integer.parseInt(s[auxj][auxk]);
                                ex = 10 * ex;
                                auxk--;
                                }
                                q++;
                            } 
                            if (j!=139 && k!=139 && !(s[j+1][k+1].equals("."))){ // Abajo der
                                auxj = j+1; auxk = k+1;
                                double ex = 1;double x =0;
                                while(auxk!=140 &&!(s[auxj][auxk].equals("."))){
                                x++;
                                auxk++;
                                }
                                auxk = k+1;
                                ex = Math.pow(10, x-1);
                                while(x>0){
                                proc[q] += ex * Integer.parseInt(s[auxj][auxk]);
                                ex = ex/10;
                                auxk++;
                                x--;
                                }
                                q++;
                            }
                        }
                        if (proc[0]!= 0 && proc[1]!= 0){
                            suma += proc[0] * proc[1];
                        }
                    }
                }
                //System.out.println(suma);
            }
            System.out.println(suma);
        }catch (FileNotFoundException e) {
            System.err.println("Problemas al abrir  " + fichero);
           
        }
    }
}