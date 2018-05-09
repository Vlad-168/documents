import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.function.Function;
import java.util.function.ToDoubleFunction;
import java.util.function.ToIntFunction;
import java.util.function.ToLongFunction;


public class programm {



	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int [] array = new int[] {21,23,43,47,59,61,70,86,93};
		Arrays.sort(array);
		System.out.println(Arrays.toString(array) );
		
		Integer [] array2  = new Integer[] {21,23,43,47,59,61,70,86,93};
		MyComparator c = new MyComparator();
		Arrays.sort(array2, c);

			
		
		System.out.println(Arrays.toString(array2));
		
		ArrayList<Student> list = new ArrayList<Student>();
		for (int i=0;i<10;i++){
			list.add(new Student() );
		}
		Student vasya = new Student();
		vasya.grade = 80;
		vasya.name = "Вася";
		System.out.println(list.sort(c));
		
		Student petrov = new Student();
		vasya.grade = 80;
		vasya.name = "Вася";
		System.out.println(vasya.equals(petrov));

	}

}
class MyComparator implements Comparator<Integer>{
	// TODO Auto-generated method stub
	
		@Override
		public int compare(Integer o1, Integer o2) {
			// TODO Auto-generated method stub
		    return o1%10-o2%10;
			
		}
	

}
class Student implements co<Integer>{
	@Override
	public int hashCode() {
		final int prime = 31;
		int result = 1;
		result = prime * result + grade;
		result = prime * result + ((name == null) ? 0 : name.hashCode());
		return result;
	}
	@Override
	public boolean equals(Object obj) {
		if (this == obj)
			return true;
		if (obj == null)
			return false;
		if (getClass() != obj.getClass())
			return false;
		Student other = (Student) obj;
		if (grade != other.grade)
			return false;
		if (name == null) {
			if (other.name != null)
				return false;
		} else if (!name.equals(other.name))
			return false;
		return true;
	}
	int grade;
	String name;
	public Student(){
		grade = (int)(Math.random()*101);
		name = ""+(int)(Math.random()*101);
	}
	@Override
	public String toString() {
		// TODO Auto-generated method stub
		return "name = "+name+" "+"grade ="+grade;
	}
	@Override
	public int compareTo(Integer o1, Integer o2) {
		// TODO Auto-generated method stub
		return this.grade - o2.grade;
	}
	
	
}
