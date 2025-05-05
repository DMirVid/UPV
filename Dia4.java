import java.util.Scanner;
import java.io.*;

public class Dia4{
    public static void main(String[] args) {
        
        double suma = 0;
        String fichero = "input4.txt";
        File fich = new File(fichero);
        try{
            Scanner entrada = new Scanner(fich);
            while(entrada.hasNextLine()){
                int ex = 0;
                String [] s = entrada.nextLine().split("[:|]");
                String [] num = s[1].split(" ");
                String [] card = s[2].split(" ");
                for (int i =0; i<num.length; i++){
                    for (int j =0; j< card.length; j++){
                        if (card[j].equals("") || num[i].equals("")){}
                        else{
                        int numero = Integer.parseInt(num[i]);
                        int carta = Integer.parseInt(card[j]);
                        if (numero == carta){
                            ex++;
                        }
                        }
                    }
                    
                }
               if (ex!=0)suma += Math.pow(2, ex-1);
            }
            System.out.println(suma);
            entrada.close();
            
        }catch (FileNotFoundException e) {
            System.err.println("Problemas al abrir  " + fichero);
        }
    }
}