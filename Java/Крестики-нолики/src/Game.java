public class Game {
    Check ch = null;
    private PlayAgain play = null;
    Game(){
        ch = new Check();
        play = new PlayAgain();
    }
    public void Games(){
        for (int v = 0; v < 7; v++) {
            for (int j = 0; j < 7; j++) {
                System.out.print(ch.attr.getM(v,j) + ' ');
            }
            System.out.println();
        }
        for (int i=0; i<9; i++){
            if (ch.attr.getY()==0){
                System.out.println("1: ");
                ch.attr.setY(1);;
            }
            else {
                System.out.println("2: ");
                ch.attr.setY(0);;
            }
            ch.Check();
            for (int v = 0; v < 7; v++) {
                for (int j = 0; j < 7; j++) {
                    System.out.print(ch.attr.getM(v,j) + ' ');
                }
                System.out.println();
            }
            for (int z=0; z<7; z++){
                for (int b=0; b<7; b++){
                    ch.attr.changeK(ch.attr.getM(z,b)=="X");
                    ch.attr.changeC(ch.attr.getM(z,b)=="O");
                    ch.attr.changeD(ch.attr.getM(b,z)=="X");
                    ch.attr.changeG(ch.attr.getM(b,z)=="O");
                }
                if (ch.attr.getM(1,1)==ch.attr.getM(3,3) && ch.attr.getM(3,3)==ch.attr.getM(5,5)){
                    if (ch.attr.getM(1,1)=="X"){
                        ch.attr.setK(3);
                    }
                    if (ch.attr.getM(1,1)=="O"){
                        ch.attr.setC(3);
                    }
                }
                if (ch.attr.getM(1,5)==ch.attr.getM(3,3) && ch.attr.getM(3,3)==ch.attr.getM(5,1)){
                    if (ch.attr.getM(1,5)=="X"){
                        ch.attr.setD(3);
                    }
                    if (ch.attr.getM(1,5)=="O"){
                        ch.attr.setG(3);
                    }
                }
                if (ch.attr.getK()==3 || ch.attr.getD()==3){
                    ch.lang.Winner1();
                    ch.lang.Replay();
                    play.Play();
                }
                if (ch.attr.getC()==3 || ch.attr.getG()==3){
                    ch.lang.Winner2();
                    ch.lang.Replay();
                    play.Play();
                }
                ch.attr.setK(0);
                ch.attr.setD(0);
                ch.attr.setC(0);
                ch.attr.setG(0);
            }
        }
        if (ch.attr.getK()==0 && ch.attr.getD()==0 && ch.attr.getC()==0 && ch.attr.getG()==0){
            ch.lang.Winner3();
            ch.lang.Replay();
            play.Play();
        }


    }
}
