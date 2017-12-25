package dp.Observer;

public class Client {

	public static void main(String[] args) 
	{
		// TODO Auto-generated method stub
		ConcSubject sub=new ConcSubject();
		
		Observer a = new Aobserver();
		Observer b = new Bobserver();
		
		sub.attach(a);
		
		sub.setCost(200);
		
		sub.attach(b);
		
		sub.setCost(400);
		
		sub.detach(a);
		
		sub.setCost(10);

	}

}
