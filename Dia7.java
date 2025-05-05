import java.io.*;
import java.util.*;


public class Dia7 {
    public static void main(String[] args) {
        String fiveof= "7", poker = "6",house = "5",trio = "4";
        String par2 = "3", par = "2", dist = "1";
        Map<Character, Character> prio = new HashMap<>();
        prio.put('A', 'Z');
        prio.put('K', 'Y');
        prio.put('Q', 'X');
        prio.put('J', 'W');
        

        String fichero = "input7.txt";
        File fich = new File(fichero);
        try{
            Scanner entrada = new Scanner(fich);
            String [] datos = new String[1000]; //1000
            int c = 0;
            while(entrada.hasNextLine()){
                String s = entrada.nextLine();
                char[] sub = s.substring(0,5).toCharArray();
                String prov = dist;
                char high = ' ';
                    for (int j = 0; j<5; j++){
                        int rank = 0;
                        for (int i = j+1; i<5; i++){
                            if (sub[j]==high){
                                break;
                            }
                            if (sub[j]==(sub[i])){
                                rank++;
                            }
                        }
                        switch (rank) {
                            case 1: //par
                                if (prov.equals(par)){
                                    prov = par2;
                                    high = sub[j];
                                }else if(prov.equals(trio)){
                                    prov = house;
                                    high = sub[j];
                                }else {
                                    prov = par;
                                    high = sub[j];
                                }
                                break;
                            case 2: //trio
                                if (prov.equals(par)){
                                    prov = house;
                                    high = sub[j];
                                }else {
                                    prov = trio;
                                    high = sub[j];
                                }
                                break;
                            case 3: //poker 4 iguales
                                prov = poker;
                                high = sub[j];
                                break;
                            case 4: //5 iguales 
                                prov = fiveof;
                                high = sub[j];
                                break;
                            default:
                                break;
                        }
                    }
                s = prov + " "+ s ;
                datos[c] = s;
                c++;               
            }
        
            int suma = 0;
            for (int i = 0; i<datos.length; i++){
                String[] sep = datos[i].split(" ");
                for (Map.Entry<Character,Character> entry : prio.entrySet()){
                    sep[1] = sep[1].replace(entry.getKey(), entry.getValue());
                }
                datos[i] = sep[0]+ " "+ sep[1] +" "+ sep[2];

            }
            Arrays.sort(datos);
            for (int j = 0; j<datos.length ; j++){
                System.out.println(datos[j]);
                suma += Integer.parseInt(datos[j].substring(8, datos[j].length())) * (j+1);
            }
            System.out.println(suma);
            entrada.close();
        }catch(FileNotFoundException e) {
            System.err.println("Problemas al abrir  " + fichero);
        }
        
    }
    
}
