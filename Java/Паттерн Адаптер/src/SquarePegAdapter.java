public class SquarePegAdapter extends RoundPeg{
    private double rad;
    public Double getRad() {
        return this.rad;
    }
    {
        SquarePeg r = new SquarePeg();
        rad = Math.sqrt((r.getWidth() * r.getWidth()) + (r.getWidth() * r.getWidth())) / 2;
    }
}