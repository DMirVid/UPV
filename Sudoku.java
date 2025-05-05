import java.util.Scanner;
import java.util.ArrayList;
public class Sudoku {
    public static Boolean esSudoku(int[][] a){
        int auxk;
        for(int i = 0; i< 9; i++){
            for(int j = 0; j<9; j++){
                for(int k = j+1; k<9;k++){
                    if(a[i][j] == a[i][k]){ //Filas
                        return(false);
                    }
                    if(a[j][i] == a[k][i]){ //Columnas
                        return(false);
                    }
                    
                    if (i % 3 == 0 && j % 3 == 0){//Grupos de 3
                        if (j==0){
                        for (int t = k; t < 9; t++){
                            auxk = k-1;
                            if (k > 3)auxk = (k-1) % 3;
                            //System.out.println(a[i+((k-1)/3)][auxk]+ "=?="+a[i+(t/3)][t % 3]);
                            if (a[i+((k-1)/3)][auxk] == a[i+(t/3)][t % 3]){
                                return(false);
                            }
                        }
                        }
                        
                    }
                     
                }
            }
        }
        for(int i = 0; i< 9; i++){
            for(int j = 0; j<9; j++){
                for(int k = 0; k<9;k++){
                    if (i % 3 == 0 && j % 3 == 0 && j > 1){
                        
                            for (int t = k+1; t < 9; t++){
                                auxk = k % 3;
                                //System.out.print("i:" + i + " j:"+ j+ " k:"+ k +" t:" +t +" ");
                                //System.out.println(a[i+((k)/3)][j+auxk]+ "=?="+a[i+(t/3)][j+(t % 3)]);
                                if (a[i+((k)/3)][j+auxk] == a[i+(t/3)][j+(t % 3)]){
                                    return(false);
                                }
                            }
                        
                    }
                }
            }
        }
        return(true);
    }
    
    public static void main(String[] args) {
        String[][] sud = new String[9][9];
        int[][] sudoku =new int[9][9];
        /**TresporTres[] bloques = new TresporTres[9];
        for (int q = 0; q<9;q++){
            bloques[q] = new TresporTres();
        }
        boolean t = true;*/
        Scanner s = new Scanner(System.in);
        for (int i = 0; i<9;i++){
           
            sud[i] = s.nextLine().split("");
            for(int j = 0; j <9; j++){
                int x = Integer.parseInt(sud[i][j]);
                sudoku[i][j] = x;
                /**t  = bloques[(i/3)+(j/3)].addNum(x);
                if (!t){
                    System.out.println("No");
                    break;

                }*/
            }
        }
        if (esSudoku(sudoku)){
            System.out.println("Si");
        }else{
            System.out.println("No");
        }
        
        s.close();
    
    }
}
class TresporTres{
    ArrayList<Boolean> bloque;

    public TresporTres(){
        bloque = new ArrayList<Boolean>();
        for (int i = 0; i<9; i++){
            bloque.add(false);
        }
    }
    protected boolean addNum(int a){
        boolean res = bloque.get(a-1);
        if (res){
            return(false);
        }else{
            bloque.set(a-1, true);
            return(true);
        }
    }
}


