import java.util.Collections;
import java.util.Scanner;
import java.util.ArrayList;


public class stack {
    public  static  void main(String[] args) {
        Scanner in = new Scanner(System.in);
        ArrayList<Integer> mas_n = new ArrayList<Integer>();
        ArrayList<Integer> mas_k = new ArrayList<Integer>();
        int n,k,hn,hk;
        n=in.nextInt();
        k=in.nextInt();
        for (int i=0;i<n;i++)
        {
        	hn = in.nextInt();
        	mas_n.add(hn);
        }
        for (int i=0;i<k;i++)
        {
        	hk = in.nextInt();
        	mas_k.add(hk);
        }
        int u=0;
        for (int i=0;i<n;i++)
        {
        	for (int j=0;j<k;j++)
        	{
        		if (mas_k.get(j) == mas_n.get(i))
        		{
        			u++;
        		}
        	}
        	if (u>0)
            {
            	System.out.println("yes");
            }
        	else
        		System.out.println("no");
        }
        
        	
 
    }
}