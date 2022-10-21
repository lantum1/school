public class App {
    int[] element = {6, 5, 10, 4, 3};
    public static void main(String[] args) {
    }
}
class Tree{
    private Node root;
    void add(Integer val){
        if (root==null){
            root = new Node(val);
        }
    }

}
class Node{
    App ap = new App();
    Node(int val){
        this.value = val;
        Node right = null;
        Node left = null;
    }
    private Node right;
    private Node left;
    private Integer value = ap.element[0];
    public Integer getValue() {
        return value;
    }
    public void setValue(Integer value) {
        this.value = value;
    }
    public Node getRight() {
        return right;
    }
    public Node getLeft() {
        return left;
    }
    public void setRight(Node right) {
        this.right = right;
    }
    public void setLeft(Node left) {
        this.left = left;
    }
}
