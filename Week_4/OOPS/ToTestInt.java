interface Test {
    int square(int x);
}
class Arithmetic implements Test {
    public int square(int x) {
        return x * x;
    }
}
public class ToTestInt {
    public static void main(String[] args) {
        Arithmetic obj = new Arithmetic();
        int num = 5;
        System.out.println("Square = " + obj.square(num));
    }
}