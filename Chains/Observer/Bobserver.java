package dp.Observer;

public class Bobserver implements Observer 
{
	int assets;
	
	@Override
	public void update(int Value) 
	{
		// TODO Auto-generated method stub

		this.assets=Value/10;
		showAssets();
	}
	
	public void showAssets()
	{
		System.out.println(assets);
	}

}
