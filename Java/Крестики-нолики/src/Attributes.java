public class Attributes {
    private String n = null;

    public void setN(String n) {
        this.n = n;
    }

    public String getN() {
        return n;
    }

    private int k = 0;

    public void changeK(boolean value){
        if (value) k++;
    }

    public void setK(int k) {
        this.k = k;
    }

    public int getK() {
        return k;
    }

    private int y = 0;

    public void setY(int y) {
        this.y = y;
    }

    public int getY() {
        return y;
    }

    private int c = 0;

    public void changeC(boolean value){
        if (value) c++;
    }

    public void setC(int c) {
        this.c = c;
    }

    public int getC() {
        return c;
    }

    private int d = 0;

    public void changeD(boolean value){
        if (value) d++;
    }

    public void setD(int d) {
        this.d = d;
    }

    public int getD() {
        return d;
    }

    private int g = 0;

    public void changeG(boolean value){
        if (value) g++;
    }

    public void setG(int g) {
        this.g = g;
    }

    public int getG() {
        return g;
    }

    private String[][] m = {
            {"||", "==", "=", "=", "=", "==", "||"},
            {"||", " ", "||", " ", "||", " ", "||"},
            {"||", "==", "=", "=", "=", "==", "||"},
            {"||", " ", "||", " ", "||", " ", "||"},
            {"||", "==", "=", "=", "=", "==", "||"},
            {"||", " ", "||", " ", "||", " ", "||"},
            {"||", "==", "=", "=", "=", "==", "||"}
    };

    public void setM(int i, int l, String value) {
        this.m[i][l] = value;
    }

    public String getM(int i, int l) {
        return m[i][l];
    }
}
