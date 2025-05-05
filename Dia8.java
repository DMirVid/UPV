import java.io.File;
import java.io.FileNotFoundException;
import java.util.*;

public class Dia8 {
    public static void main(String[] args) {
        String fichero = "input8.txt";
        File fich = new File(fichero);
        try{
            Scanner entrada = new Scanner(fich);
            String ins = entrada.nextLine();
            String[] datos = new String[715];
            String[] act = new String[6];
            int c = 0;
            int as = 0;
            while(entrada.hasNextLine()){
                datos[c] = entrada.nextLine();
                if (c!= 0 && datos[c].substring(2, 3).equals("A")){
                    act[as] = datos[c].substring(0,3);
                    as++;
                }
                c++;
            }
            Arrays.sort(datos);
            boolean find = false;
            double cont = 0;
            String actual = "AAA";
            int i = 0;
            while(!find){
                for (int j = 1; j< datos.length; j++){
                    
                    if (datos[j].substring(0,3).equals(actual)){
                        actual = datos[j];
                        break;
                    }
                }
                char instruc = ins.charAt(i);
                if (instruc == 'R'){
                    actual = actual.substring(12,15);
                }
                if (instruc == 'L'){
                    actual = actual.substring(7,10);
                    
                }
                if (actual.substring(0, 3).equals("ZZZ")){find= true;}
                cont++;
                i = (int)cont % ins.length(); 
                
            }
            System.out.println(cont);
            // Parte 2 
            Arrays.sort(act);
            int[] res = new int[6];
            for (int x = 0; x<act.length; x++){
            find = false;
            cont = 0;
            i = 0;
            while(!find){
                
                    for (int j = 1; j< datos.length; j++){
                    
                    if (datos[j].substring(0,3).equals(act[x].substring(0,3))){
                        act[x] = datos[j];
                        break;
                    }
                }
                    char instruc = ins.charAt(i);
                    if (instruc == 'R'){
                        act[x] = act[x].substring(12,15);
                    }
                    else{
                        act[x] = act[x].substring(7,10);
                    }
                    if (act[x].substring(2, 3).equals("Z")){
                       find = true;
                    }
                cont++;
                i = (int)cont % ins.length(); 
                res[x] = (int) cont;
            }
            }
            long result = res[0];
            for (int t = 1; t< res.length ;t++){
                result = lcm(result, res[t]);
                
            }
            System.out.println(result);
           
            entrada.close();
        }catch(FileNotFoundException e) {
            System.err.println("Problemas al abrir  " + fichero);
        }
        
    }
    public static long lcm(long a, long b){
        long max = Math.max(a, b);
        long min = Math.min(a, b);
        long lcm = max; 
        while (lcm % min != 0){
            lcm += max;
        }
        return lcm;

    }
}