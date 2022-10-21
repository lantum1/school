import java.util.Scanner;
public class PlayAgain {
    private Scanner scanner = null;
    private String ans = null;
    private Startup start = null;
    public void Play(){
        start = new Startup();
        scanner=new Scanner(System.in);
        ans=scanner.next();
        if (ans.equals("yes")){
            start.App();
        }
        else{
            System.exit(0);
        }
    }
}
