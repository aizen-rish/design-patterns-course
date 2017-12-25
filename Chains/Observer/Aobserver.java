package dp.Observer;

public class Aobserver implements Observer {

	private int money;
	
	@Override
	public void update(int Value) 
	{
		// TODO Auto-generated method stub
		this.money=Value;
		
		showMoney();

	}
	
	public void showMoney()
	{
		System.out.println(money);
	}

}
