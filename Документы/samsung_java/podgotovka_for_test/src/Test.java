import java.util.Arrays;
    public  class Test {
    public static void main(String[] args) {

// write your code here 
String [] a = new String[4];
a[0] = "-2spring";
a[1] = "-1spring";
a[2] = "spring";
Arrays.sort(a);

        System.out.println(Arrays.binarySearch(a, "spring"));
    }
}
