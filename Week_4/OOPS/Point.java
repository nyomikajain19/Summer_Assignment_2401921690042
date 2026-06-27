class Point {
    private int x, y;
    public Point() {
        x = 0;
        y = 0;
    }
    public Point(int x, int y) {
        this.x = x;
        this.y = y;
    }
    public void setX(int x) {
        this.x = x;
    }
    public void setY(int y) {
        this.y = y;
    }
    public void setXY(int x, int y) {
        this.x = x;
        this.y = y;
    }
    public void display() {
        System.out.println("X = " + x);
        System.out.println("Y = " + y);
    }
    public static void main(String[] args) {
        Point p = new Point();
        p.setX(10);
        p.setY(20);
        p.display();
        p.setXY(30, 40);
        p.display();
    }
}