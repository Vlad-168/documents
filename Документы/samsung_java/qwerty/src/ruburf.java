import java.util.Scanner;
import java.util.TreeSet;


public class ruburf {

	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		java.util.TreeMap <String, String> dictionary = new java.util.TreeMap<>();
		Scanner in = new Scanner(System.in);
		//int n = in.nextInt();
		//for (int i=1;i<=n;i++){
			//String value_1, value_2;
			
			//value_1 = in.next();
			//value_2 = in.next();
			//dictionary.put(value_1, value_2);
			//dictionary.put(value_2, value_1);
			
		//}
		//System.out.println(dictionary.get(in.next()));
		
		TreeSet<Integer> num = new TreeSet<>();
		int a= in.nextInt();
		while(a!=0){
			
			num.add(a);
			a=in.nextInt();
			
		}
		System.out.println(num.size());
		
		
		

}
	}
