import java.util.Scanner;
import java.util.regex.*;

public class Dia1{
    public static void main(String[] args) {
        int pri = 0;
        int last = 0;
        Scanner teclado = new Scanner(System.in);
        String s = "";
        int suma = 0;

        Pattern pat1 = Pattern.compile("one");
        Pattern pat2 = Pattern.compile("two");
        Pattern pat3 = Pattern.compile("three");
        Pattern pat4 = Pattern.compile("four");
        Pattern pat5 = Pattern.compile("five");
        Pattern pat6 = Pattern.compile("six");
        Pattern pat7 = Pattern.compile("seven");
        Pattern pat8 = Pattern.compile("eight");
        Pattern pat9 = Pattern.compile("nine");

        while (teclado.hasNextLine()){
            int ult = 0;
            s = teclado.nextLine();
            boolean prim = true;
            for (int j = 0;j<s.length();j++){
                String sub = s.substring(ult, j+1);

                Matcher mat1 = pat1.matcher(sub);
                sub = mat1.replaceAll("1");
                Matcher mat2 = pat2.matcher(sub);
                sub = mat2.replaceAll("2");
                Matcher mat3 = pat3.matcher(sub);
                sub = mat3.replaceAll("3");
                Matcher mat4 = pat4.matcher(sub);
                sub = mat4.replaceAll("4");
                Matcher mat5 = pat5.matcher(sub);
                sub = mat5.replaceAll("5");
                Matcher mat6 = pat6.matcher(sub);
                sub = mat6.replaceAll("6");
                Matcher mat7 = pat7.matcher(sub);
                sub = mat7.replaceAll("7");
                Matcher mat8 = pat8.matcher(sub);
                sub = mat8.replaceAll("8");
                Matcher mat9 = pat9.matcher(sub);
                sub = mat9.replaceAll("9");
               
                String aux = sub.substring(sub.length()-1);
                if (prim &&aux.matches("[0-9]*")){
                    pri = Integer.parseInt(aux);
                    last = pri;
                    prim = false;
                    ult = j;
                }else if(aux.matches("[0-9]*")){
                    last = Integer.parseInt(aux);
                    ult = j;
                }  
            }
            suma += pri*10 + last;
            System.out.println(suma);
        }
        System.out.println(suma);
        teclado.close();
    }
}