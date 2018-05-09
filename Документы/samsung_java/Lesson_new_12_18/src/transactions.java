class Client implements Runnable{
	int id;
	Baker b;
	Client (Baker b, int id){
		this.b = b;
		this.id = id;
	}
	@Override
	public void run() {
		// TODO Auto-generated method stub
		while(true){
			b.transaction(id,(int)Math.random()*25);
		}
		
	}
}

class Postav implements Runnable{
	int id;
	Baker b;
	Postav(Baker b, int id){
		this.b =b;
		this.id = id;
		
	}
	@Override
	public void run() {
		// TODO Auto-generated method stub
		while(true){
			b.transaction_1(id,(int)Math.random()*50);
		}
		
	}
	
}
	



class Baker{
	double [] accounts = new double[200];
	
	public Baker(){
		for(int i =0;i<200;i++){
			accounts[i]=200;
		}
	}
	
	public void total(double amount){
		double sum = amount;
		for (double d : accounts){
			sum+=d;
		}
		System.out.printf("%.2f\n", sum);
	}
	public void total_1(double put){
		double sum = put;
		for (double d :accounts ){
			sum+=d;
		}
		System.out.printf("%.2f\n", sum);
	}
	
	public synchronized void transaction(int from, double amount){
		accounts[from] -=amount;
		try {
			Thread.sleep(2000);
		} catch (InterruptedException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}
	public synchronized void transaction_1( int to, double put){
		accounts[to] += put;
		try {
			Thread.sleep(2000);
		} catch (InterruptedException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}
}

public class transactions {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Baker b = new Baker();
		for (int i=0;i<200;i++){
			Postav p = new Postav(b,i);
			Client c = new Client(b, i);
			new Thread(c).start();
			new Thread(p).start();
		}
		while (true){
			b.total();
			b.total_1();
		}

	}

}
