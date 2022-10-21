import java.util.Scanner;
public class Check {
    Scanner scanner = new Scanner(System.in);
    Attributes attr = new Attributes();
    Language lang = new Language();
    public void Check(){
        while (true) {
            attr.setN(scanner.next());
            if ((Character.digit(attr.getN().charAt(0),10)>0 && Character.digit(attr.getN().charAt(0),10)<=3) && ((Character.digit(attr.getN().charAt(1),10)>0 && Character.digit(attr.getN().charAt(1),10)<=3)) && attr.getN().length()==3 && (attr.getN().charAt(2) == 'x' || attr.getN().charAt(2) == 'o')){
                if (attr.getN().charAt(2) == 'x') {
                    if (attr.getY()==1) {
                        if (attr.getM((attr.getN().charAt(0) - 48) * 2 - 1,(attr.getN().charAt(1) - 48) * 2 - 1) == " ") {
                            attr.setM((attr.getN().charAt(0) - 48) * 2 - 1,(attr.getN().charAt(1) - 48) * 2 - 1,"X");
                            break;
                        }
                        else {
                            lang.RewriteError();
                            for (int v = 0; v < 7; v++) {
                                for (int j = 0; j < 7; j++) {
                                    System.out.print(attr.getM(v,j) + ' ');
                                }
                                System.out.println();
                            }
                            continue;
                        }
                    }
                    else{
                        lang.O();
                        for (int v = 0; v < 7; v++) {
                            for (int j = 0; j < 7; j++) {
                                System.out.print(attr.getM(v,j) + ' ');
                            }
                            System.out.println();
                        }
                        continue;
                    }
                }
                if (attr.getN().charAt(2) == 'o') {
                    if (attr.getY()==0) {
                        if (attr.getM((attr.getN().charAt(0) - 48) * 2 - 1,(attr.getN().charAt(1) - 48) * 2 - 1) == " ") {
                            attr.setM((attr.getN().charAt(0) - 48) * 2 - 1, (attr.getN().charAt(1) - 48) * 2 - 1, "O");
                            break;
                        }
                        else {
                            lang.RewriteError();
                            for (int v = 0; v < 7; v++) {
                                for (int j = 0; j < 7; j++) {
                                    System.out.print(attr.getM(v,j) + ' ');
                                }
                                System.out.println();
                            }
                            continue;
                        }
                    }
                    else{
                        lang.X();
                        for (int v = 0; v < 7; v++) {
                            for (int j = 0; j < 7; j++) {
                                System.out.print(attr.getM(v,j) + ' ');
                            }
                            System.out.println();
                        }
                        continue;
                    }
                }
            }
            else{
                lang.InputError();
                for (int v = 0; v < 7; v++) {
                    for (int j = 0; j < 7; j++) {
                        System.out.print(attr.getM(v,j) + ' ');
                    }
                    System.out.println();
                }
                continue;
            }
        }
    }
}
