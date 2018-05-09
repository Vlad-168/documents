import java.util.ArrayList;
import java.util.Scanner;
import java.util.Collection;


public class mas {
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		ArrayList<Integer> mas = new ArrayList<Integer>();
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		for (int i=0; i<n; i++)
            mas.add(in.nextInt());
		int qwer;
		for (int i=0;i<n/2;i++)
		{
			qwer = mas.get(i);
			mas.set(i, mas.get(n-i-1));
			mas.set(n-i-1, qwer);
		}
		for (int i=0;i<n;i++)
			System.out.println(mas.get(i)+" ");
			
		    
		
	}

}
