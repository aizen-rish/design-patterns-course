
public class SubNum implements Handler {

	Handler successor;
	
	@Override
	public void handleRequest(request Req) {
		// TODO Auto-generated method stub
		
		if(Req.op.equalsIgnoreCase("sub"))
			System.out.println(Req.num1-Req.num2);
		else
			System.out.println("End of chain");
	}

	@Override
	public void setNextHandler(Handler next) {
		// TODO Auto-generated method stub
		successor = next;
	}

}
