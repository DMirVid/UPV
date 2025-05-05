import java.util.PriorityQueue;

public class Dijkstra{
    private int vertices; 
    /**Dijkstra, no lo piden en las prásticas pero es para practicar.
     * RECOMENDABLE eliminar el día del examen, por si acaso. 
     * También se añadió Comparable a Adyacente.
     * CaminoMin y DiatanciaMin deben declararse fuera para que sean accesibles
     * @param vOrigen, vertice desde donde se empieza el algoritmo
     */
    public void dijkstra(int vOrigen){
        //Deben declaraese fuera del método
        int[] caminoMin = new int[numVertices()];
        double[] distanciaMin = new double[numVertices()];
       
        for (int i = 0; i< numVertices(); i++){
            caminoMin[i] = -1;
            distanciaMin[i] = Double.MAX_VALUE;
        }
        
        visitados = new int[numVertices()];
        ColaPrioridad<Adyacente> qPrior = new MonticuloBinario<>();
        distanciaMin[vOrigen] = 0; 
        qPrior.insertar(new Adyacente(vOrigen, 0));
        //Es un adyacente, pero es más bien como el actual
        while(!q.esVacia()){
            Adyacente v = qPrior.eliminarMin();
            //Siguiente vertice de menor distancia de un vértice ya visitado
            if (visitados[v.destino] == 0){
                visitados[v.destino] = 1;
                ListaConPI<Adyacente> l = adyacentesDe(v.destino);
                Adyacente a = l.recuperar();
                int w = a.destino;
                double pesoW = a.peso;
                if (distanciaMin[w] > distanciaMin[v.destino] + pesoW){
                    distanciaMin[w] = distanciaMin[v.destino] + pesoW;
                    caminoMin[w] = v.destino;
                    qPrior.insertar(new Adyacente(w, distanciaMin[w]));
                }
            }
        }
    }

    private int numVertices() {
        return vertices; 
    }
}