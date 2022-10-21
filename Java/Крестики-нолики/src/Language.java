import java.util.Scanner;
public class Language {
    private Scanner scanner = new Scanner(System.in);
    private String lang1 = null;
    public void Input(){
        while(true) {
            lang1=scanner.next();
            if (lang1.equals("rus") || lang1.equals("eng")){
                break;
            }
            else{
                System.out.println("This language hasn't been added yet. I'm working on it ;). Try again: ");
            }
        }
    }
    public void Intro(){
        if (lang1.equals("rus")) {
            System.out.println("Крестики-нолики — логическая игра между двумя противниками на квадратном поле 3 на 3 клетки.\n" +
                    "Один из игроков играет \"крестиками\", второй — \"ноликами\".\n"+
                    "ПРАВИЛА:\n"+
                    "Игроки по очереди ставят на свободные клетки поля 3х3 знаки (1 игрок всегда крестики, 2 игрок всегда\n" +
                    "нолики). Первый, выстроивший в ряд 3 своих фигуры по вертикали, горизонтали или диагонали, выигрывает. Первый\n" +
                    "ход делает игрок, ставящий крестики.\n" +
                    "КАК ИГРАТЬ:\n"+
                    "Постановка знаков X или O производится путем ввода строки [x][y]x или [x][y]o, где [x] - координата\n" +
                    "клетки по x (находится в пределах 1-3), [y] - координата клетки по y (находится в пределах 1-3),\n" +
                    "x - знак крестика, o - знак нолика. Например, строка 13x означает, что в 3 клетку 1 строки игрок ставит знак X.\n" +
                    "ЖЕЛАЕМ ВАМ ПРИЯТНОЙ ИГРЫ!");
        }
        else{
            System.out.println("Tic-tac-toe is a logic game between two opponents in a square field 3 for 3 cells." +
                    "One of the players plays \"crosses\", the second - \"toes\".\n" +
                    "RULES:\n" +
                    "Players take turns putting 3x3 marks on free squares (1 player is always crosses, 2 player is always\n" +
                    "toe). The first one, who has lined up his 3 figures vertically, horizontally or diagonally, wins. The first\n" +
                    "move is made by the player placing the crosses.\n" +
                    "HOW TO PLAY:\n" +
                    "The characters X or O are set by entering the string [x][y]x or [x][y]o, where [x] is the cell\n" +
                    "coordinate in x (is in 1-3), [y] - cell coordinate in y (is in 1-3),\n" +
                    "x - a cross mark, o - a zero sign. For example, the line 13x means that the player puts the X in the 3 square 1 row\n" +
                    "WISH YOU GOOD GAME!");
        }
    }
    public void X(){
        if (lang1.equals("eng")){
            System.out.println("You can only bet X. Try again: ");
        }
        else{
            System.out.println("Вы можете ставить только X. Попробуйте снова: ");
        }
    }
    public void O(){
        if (lang1.equals("eng")){
            System.out.println("You can only bet O. Try again: ");
        }
        else{
            System.out.println("Вы можете ставить только O. Попробуйте снова: ");
        }
    }
    public void InputError(){
        if (lang1.equals("eng")){
            System.out.println("Wrong input format! Try again: ");
        }
        else{
            System.out.println("Неправильный формат ввода! Попробуйте снова: ");
        }
    }
    public void RewriteError(){
        if (lang1.equals("eng")){
            System.out.println("Cannot overwrite cells! Try again: ");
        }
        else{
            System.out.println("Нельзя перезаписывать клетки! Попробуйте снова: ");
        }
    }
    public void Replay(){
        if (lang1.equals("eng")){
            System.out.println("Do you want to play again? Enter yes to continue or any other character to cancel.");
        }
        else{
            System.out.println("Хотите сыграть еще раз? Введите yes для продолжения или любой другой символ для отмены.");
        }
    }
    public void Winner1(){
        if (lang1.equals("eng")){
            System.out.println("PLAYER 1 WON! :)");
        }
        else{
            System.out.println("ВЫИГРАЛ 1 ИГРОК! :)");
        }
    }
    public void Winner2(){
        if (lang1.equals("eng")){
            System.out.println("PLAYER 2 WON! :)");
        }
        else{
            System.out.println("ВЫИГРАЛ 2 ИГРОК! :)");
        }
    }
    public void Winner3(){
        if (lang1.equals("eng")){
            System.out.println("NO ONE WON! :(");
        }
        else{
            System.out.println("НИКТО НЕ ВЫИГРАЛ! :(");
        }
    }
}
