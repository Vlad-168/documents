
import java.util.ArrayList;
import java.util.Scanner;
import java.util.Set;
import java.util.TreeSet;

class MyHashSet{
	int size;
	ArrayList<Integer> set[];

	MyHashSet(int size){
		this.size = size;
		set = new ArrrayList<Integer> set;
	}
}


public class set_mnogestv {
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		int roads = in.nextInt();
		Set<Integer> set = new TreeSet<Integer>();
		for (int i=0;i<roads;i++)
		{
			int islands = in.nextInt();
			set.add(islands);
			if (set.size() == n){
				System.out.println(i+2 /2);
				break;
			}
		}
		
	}

}
