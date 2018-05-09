import java.util.ArrayList;
import java.util.Map;
import java.util.Scanner;
import java.util.TreeMap;



public class good {
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner in = new Scanner(System.in);
		Map<String, ArrayList<Integer>> map = new TreeMap <String, ArrayList<Integer>>();
		
		int num = in.nextInt();
		for (int i=0;i<num;i++)
		{ 
			ArrayList<Integer> marks = new ArrayList<>();
			String name = in.next();
			if (map.containsKey(name))
			{
				map.get(name).add(in.nextInt());
				
			}
			else
			{
				marks.add(in.nextInt());
				map.put(name, marks);
			}
			
		}
		int num_of_search = in.nextInt();
		for (int i=0;i<num_of_search;i++)
		{
			String name = in.next();
			System.out.println(map.get(name));
		}
		
	}
}