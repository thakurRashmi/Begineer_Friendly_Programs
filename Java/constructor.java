class cylinder{
    private int radius;
    private int height;
public cylinder(int radius, int height){
    this.radius=radius;
    this.height=height;
}
    public int getHeight() {
        return height;
    }

    public void setHeight(int height) {
        this.height = height;
    }

    public int getRadius() {
        return radius;
    }

    public void setRadius(int radius) {
        this.radius = radius;
    }
    public double area(){
        return 2*3.14*radius*height+2*3.14*radius*radius;
    }
    public double volume(){
        return 3.14*radius*radius*height;
    }
}
public class Oopssss {
    public static void main(String[] args) {
        cylinder cyc=new cylinder(9,7);
        System.out.println(cyc.getRadius());
        System.out.println(cyc.getHeight());
        System.out.println(cyc.area());
        System.out.println(cyc.volume());
    }
    }
