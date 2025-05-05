public class Dia6 {
    public static void main(String[] args) {
        int [] tiempos = {56, 97, 77, 93};
        int [] distancia = {499, 2210, 1097, 1440};

        double v, t, e;
        int [] cont = new int[4];
        for (int i = 0; i <tiempos.length; i++){
            for (int j =0 ;j<tiempos[i]; j++){
                t = tiempos[i]-j;
                v= j;
                e = v*t;
                if (e> distancia[i]){
                    cont[i]++;
                }
            }
        }
        int salida = cont[0] * cont[1]* cont[2] * cont[3];
        System.out.println(salida);
        //Parte 2
        int tiempo = 56977793;
        double dist = 4992210109.71440;

        v=0; t=0; e=0;
        int  conta = 0;
       
            for (int j =0 ;j<tiempo; j++){
                t = tiempo-j;
                v= j;
                e = v*t;
                if (e> dist*100000){
                    conta++;
                }
            }
        System.out.println(conta);
       


    }
}
