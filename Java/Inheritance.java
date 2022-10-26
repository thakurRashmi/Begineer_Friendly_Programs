class animal {
    int a;

    public int getA() {
        return a;}
    {
        System.out.println("Animal are cute");
    }
    public void setA(int a) {
        this.a = a;
    }}
class dog extends animal{
    int y;

        public int getY() {
            return y;
        }
        {
            System.out.println("I am a dog and i am a loyal");
        }

        public void setY(int y) {
            this.y = y;
        }
    }


public class Inheritance {
    public static void main(String[] args) {
        dog d=new dog();
    }
}
