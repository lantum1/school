public class Startup {
    Game game = null;
    Startup(){
        game = new Game();
    }
    public void App(){
        System.out.println("Enter game language (rus - RUSSIAN, eng - ENGLISH):");
        game.ch.lang.Input();
        game.ch.lang.Intro();
        game.Games();
    }
}
