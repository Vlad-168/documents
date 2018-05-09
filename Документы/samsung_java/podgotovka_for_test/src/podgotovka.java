import java.io.File;
import java.io.PrintWriter;
import java.util.concurrent.ExecutionException;

class User{
	int salary;
	int id;
}
class UserCollection{
	User [] users = new User[10];
	public User getUserById(int id){
		return users[id];
		
	}
}



public class podgotovka {
	public static void main(String[] args) {
		UserCollection collection = new UserCollection();
		User u = null;
		File f = null;
		PrintWriter pw = null;
		try{
			f = new File ("taxt.txt");
			System.out.println(f.exists());
			u = collection.getUserById(3);
			u.salary = 2000/0;
		} catch (NullPointerException e){
			u = new User();
		} 
		catch (ArrayIndexOutOfBoundsException e){
			u = new User();
		}
		catch (Exception e){
			System.out.println("Деление на 0");
			return;
		}
		finally {
			System.out.println("You are in finally!!!");
		}
		
		
		

	}

}
