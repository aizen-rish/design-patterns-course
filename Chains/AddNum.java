
public class AddNum implements Handler 
{
	Handler successor;
	
	@Override
	public void handleRequest(request Req) 
	{
		// TODO Auto-generated method stub
		if(Req.op.equalsIgnoreCase("add"))
			System.out.println(Req.num1+Req.num2);
		else
			successor.handleRequest(Req);
	}

	@Override
	public void setNextHandler(Handler next) 
	{
		// TODO Auto-generated method stub
		successor = next;

	}

}
