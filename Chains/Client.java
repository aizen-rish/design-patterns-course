
public class Client {

	public static void main(String[] args) 
	{
		// TODO Auto-generated method stub
		Handler h1 = new AddNum();
		Handler h2 = new SubNum();
		
		h1.setNextHandler(h2);
		
		request r1 = new request(4,2,"sub");
		h1.handleRequest(r1);
	}

}
