public class ReturnSwitch{
    public static String elige(int i){
        return switch(i){
            case 1 -> "Esto funciona";
            default -> "WOW";   
        };
    }
    public static void main(String[] args) {
        System.out.println(elige(1));
        System.out.println(elige(0));
    }
}