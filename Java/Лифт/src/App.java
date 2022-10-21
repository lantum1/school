import java.util.Scanner;
import java.util.Timer;
import java.util.TimerTask;
public class App {
    public static void main(String[] args) {
        StateContext context = new StateContext();
        Timer timer=new Timer();
        Timer timer1 = new Timer();
        context.Source();
        context.Dest();
        int k=0;
        if (context.getC()-context.getY()>0){
            k=context.getC()-context.getY();
        }
        else if (context.getC()-context.getY()<0){
            k=context.getY()-context.getC();
        }
        context.stay();
        context.open();
        timer.schedule(new TimerTask() {
            public void run() {
                context.opened();
            }
        }, 1000);
        try {
            Thread.sleep(1000);
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
        timer.schedule(new TimerTask() {
            public void run() {
                context.close();
            }
        }, 5000);
        try {
            Thread.sleep(5000);
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
        timer.schedule(new TimerTask() {
            public void run() {
                context.closed();
            }
        }, 1000);
        try {
            Thread.sleep(1100);
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
        context.move();
        timer.scheduleAtFixedRate(new TimerTask() {
            public void run() {
                context.stay();
                context.move();
            }
        }, 3000,3000);
        try {
            Thread.sleep(k*3000);
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
        timer.cancel();
        try{
            Thread.sleep(100);
        } catch (InterruptedException e){
            e.printStackTrace();
        }
        context.open();
        timer1.schedule(new TimerTask() {
            public void run() {
                context.opened();
            }
        }, 1000);
        try {
            Thread.sleep(1000);
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
        timer1.schedule(new TimerTask() {
            public void run() {
                context.close();
            }
        }, 5000);
        try {
            Thread.sleep(5000);
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
        timer1.schedule(new TimerTask() {
            public void run() {
                context.closed();
            }
        }, 1000);
        try {
            Thread.sleep(1100);
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
        timer1.cancel();
    }
}
    interface State{
        String getName();
        void stay(StateContext context);
        void move(StateContext context);
    }
    class Running implements State{
        private static final String NAME = "running";
        public String getName() {
            return NAME;
        }
        public void stay(StateContext context){
            context.setState( new Staying());
        }
        public void move(StateContext context){
        }
    }
    class Staying implements State{
        private static final String NAME = "staying";
        public String getName() {
            return NAME;
        }
        public void move(StateContext context){
            context.setState((new Running()));
        }
        public void stay(StateContext context){
        }
    }
    class StateContext {
        Scanner scanner = new Scanner(System.in);
        private int c=0;
        private int y=0;
        public Integer getC(){
            return this.c;
        }
        public Integer getY(){
            return this.y;
        }
        public void Source(){
            System.out.println("Введите № этажа, на котором вы находитесь: ");
            y=scanner.nextInt();
        }
        public void Dest(){
            System.out.println("Введите № этажа, на который вы хотите попасть: ");
            c=scanner.nextInt();
        }
        private State state = new Running();
        public void move() {
            if (c>=y){
                y=y+1;
                if (y<=c){
                    System.out.println("Лифт едет на " + y + " этаж");
                    state.move(this);
                }
            }
            else if (c<y){
                y=y-1;
                if (y>=c){
                    System.out.println("Лифт едет на " + y + " этаж");
                    state.move(this);
                }
            }
        }
        public void stay() {
                System.out.println("Лифт находится на " + y + " этаже");
                state.stay(this);
        }
        public void open(){
            System.out.println("Двери открываются");
        }
        public void opened(){
            System.out.println("Двери открыты");
        }
        public void close(){
            System.out.println("Двери закрываются");
        }
        public void closed(){
            System.out.println("Двери закрыты");
        }
        public void setState(State state) {
            this.state = state;
        }
        public State getState() {
            return state;
        }
    }