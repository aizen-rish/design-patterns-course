package dp.Observer;

import java.util.ArrayList;

public class ConcSubject implements Subject 
{
	private int cost;
	private ArrayList<Observer> ds;
	
	public int getCost() {
		return cost;
	}

	public ConcSubject() {
		
		this.ds = new ArrayList<>();
	}

	public void setCost(int cost) {
		this.cost = cost;
		notifyO();
	}

	
	@Override
	public void attach(Observer o) 
	{
		// TODO Auto-generated method stub
		ds.add(o);
		
	}

	@Override
	public void detach(Observer o) {
		// TODO Auto-generated method stub
		int index=ds.indexOf(o);
		System.out.println("Deleting : "+index);
		ds.remove(o);
	}

	@Override
	public void notifyO() 
	{
		// TODO Auto-generated method stub
		for(Observer o: ds)
		{
			o.update(getCost());
		}
	}

}
