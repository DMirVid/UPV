import java.util.Scanner;
import java.io.*;

public class Dia2{
    public static void main(String[] args) {
        int red = 12, green = 13, blue = 14;
        int suma = 0;
        String fichero = "input2.txt";
        File fich = new File(fichero);
        try{
            Scanner entrada = new Scanner(fich);
            while(entrada.hasNextLine()){
                boolean posible = true;
                String [] s = entrada.nextLine().split("[:;]");
                String [] num = s[0].split(" ");
                int juego = Integer.parseInt(num[1]);
                int minr = 0, ming = 0, minb = 0;
                for (int i =1; i< s.length;i++){
                    String [] color = s[i].split(",");
                    for (int j = 0; j<color.length;j++){
                        String [] atom = color[j].split(" ");
                        int n = Integer.parseInt(atom[1]);
                    /**  Parte 1
                     * if (atom[2].equals("red") && n> red){
                            posible = false;
                        }else if (atom[2].equals("green") && n> green){
                            posible = false;
                        }else if (atom[2].equals("blue") && n> blue){
                            posible = false;
                        }
                     *  */    
                        if (atom[2].equals("red") && n > minr ){
                            minr = n;
                        }else if (atom[2].equals("green") && n > ming){
                            ming = n;
                        }else if (atom[2].equals("blue") && n > minb){
                            minb = n;
                        }
                        
                    }
                }
                if (posible){
                    suma += minr * ming * minb;  // suma += juego;
                }
            }
            System.out.println(suma);
            entrada.close();
        }catch (FileNotFoundException e) {
            System.err.println("Problemas al abrir  " + fichero);
        }
    }
}