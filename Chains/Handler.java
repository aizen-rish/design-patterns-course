
public interface Handler 
{
	public void handleRequest(request Req);
	public void setNextHandler(Handler next);
}
