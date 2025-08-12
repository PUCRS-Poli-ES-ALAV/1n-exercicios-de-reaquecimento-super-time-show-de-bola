



class ex04 {

    
    public static String invertString(String s) {
        if(s.length() == 1) return s;
        char c = s.charAt(0);
        return invertString(s.substring(1))+ c;
    }

    public static void main(String args[]) {
        System.out.println(invertString("socorram me subi no onibus em marrocos"));
    }
}