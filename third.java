public class third {
    public static void main(String[] args) {
        firstMeth();
        third thirdobj = new third();
        thirdobj.secoundMeth();
    }
    public static void firstMeth(){
        System.out.println("This is first method");
    }
    public void secoundMeth(){
        System.out.println("This is secound method");
    }
}
