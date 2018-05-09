
import java.util.Scanner;

class A{
    int a;
    String name;
}

class Main {
    public static void main(String[] args){
        final Scanner in = new Scanner(System.in);
        A myClass  = new A(){
    		{
		    name=in.next();
;
    		}
	};
        System.out.print(myClass.name);
    }
}