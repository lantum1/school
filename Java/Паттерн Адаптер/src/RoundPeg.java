public class RoundPeg {
    private int radius1=5;
    private int result;
    private double result1;
    public void Test() {
        RoundHole n = new RoundHole();
        SquarePegAdapter r = new SquarePegAdapter();
        result = n.getRadius();
        result1 = r.getRad();
        if (result <= radius1){
            System.out.println("The Round Peg fits in Round hole with radius "+result);
        }
        else{
            System.out.println("The Round Peg doesnt fit in Round hole with radius "+result);
        }
        if (result1<=radius1){
            System.out.println("The Square Peg fits in Round Hole with radius "+result1);
        }
        else{
            System.out.println("The Square Peg doesnt fit in Round Hole with radius "+result1);
        }
    }
}