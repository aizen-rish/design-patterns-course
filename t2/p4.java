interface Comp
{
    public void op();
}

class ConcComp implements Comp
{
    //public boolean x;

    ConcComp()
    {
        //x=false;
    }
    // public boolean getx() {return x;}
    // public void setx() {x=true;}
    public void op()
    {
        System.out.println("Component operation ");
    }
}

abstract class Deco implements Comp
{
    Comp pc;

    Deco(Comp x)
    {
        pc=x;
    }
    public void op()
    {
        pc.op();
    }
}

class Deco1 extends Deco
{
    Deco1(Comp x)
    {
        super(x);
        // if(super.pc.x==false)
        // {
        //         super.pc.setx();
        //         x=new Deco1(x);
        // }

        if( x instanceof ConcComp)
        {
            System.out.println("He ");
            x=new Deco1(this);
        }
        
    }
    
    public void op()
    {
       
        System.out.println("Decorator-ed ");
        super.op();
    }
}

public class p4
{
    public static void main(String[] args) {
        
        Comp ab=new ConcComp();
        ab.op();  
        ab = new Deco1(ab);
        ab.op();
        // ab = new Deco1(ab);
        // ab.op();
    }
}