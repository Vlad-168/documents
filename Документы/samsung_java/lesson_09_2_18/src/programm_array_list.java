
public class programm_array_list {

	
	public static void main(String[] args) {
		MyArrayList arr = new MyArrayList();
		arr.fill(10, 0, 100);
		arr.print(null);
	}
}
	
class MyArrayList implements List{
	
	public  int[] fill(int length, int min, int max) {
		int[] array = new int [length];
		for (int i = 0; i < array.length; i++) {
			array[i] = min+(int)(Math.random()*(max-min+1));
		}
		return array;
	}	

	public  void print (int[] array) {
		for (int i : array) {
			System.out.print(i + " ");
		}
		System.out.println();
	}
	int index=0;
	int [] array = new int[100];
	@Override
	public void add(int number) {
		// TODO Auto-generated method stub
		
		index = index + 1;
		array[index] = number;
		
	}

	@Override
	public void add(int index, int number) {
		// TODO Auto-generated method stub
		index = index+1;
		array.[index] = number;
	}

	@Override
	public void set(int index, int number) {
		// TODO Auto-generated method stub
		
	}

	@Override
	public int get(int index) {
		// TODO Auto-generated method stub
		return 0;
	}

	@Override
	public boolean contains(int number) {
		// TODO Auto-generated method stub
		return false;
	}

	@Override
	public int indexOf(int number) {
		// TODO Auto-generated method stub
		return 0;
	}

	@Override
	public int lastIndexOf(int number) {
		// TODO Auto-generated method stub
		return 0;
	}

	@Override
	public int size() {
		// TODO Auto-generated method stub
		return index+1;
	}

	@Override
	public void clear() {
		// TODO Auto-generated method stub
		
	}

	@Override
	public boolean removeByIndex(int index) {
		// TODO Auto-generated method stub
		return false;
	}

	@Override
	public boolean removeByValue(int number) {
		// TODO Auto-generated method stub
		return false;
	}

	@Override
	public boolean removeAllByValue(int number) {
		// TODO Auto-generated method stub
		return false;
	}

	@Override
	public boolean isEmpty() {
		// TODO Auto-generated method stub
		return false;
	}

	@Override
	public int[] toArray() {
		// TODO Auto-generated method stub
		return null;
	}
	 
	

}
public interface List {
	public void add(int number);
	public void add(int index, int number);
	public void set(int index, int number);
	public int get(int index);
	public boolean contains(int number);
	public int indexOf(int number);
	public int lastIndexOf(int number);
	public int size();
	public void clear();
	public boolean removeByIndex(int index);
	public boolean removeByValue(int number);
	public boolean removeAllByValue(int number);
	public boolean isEmpty();
	public int [] toArray();
	
}
 
