public interface Chain
{
    public handleRequest(request Req);
    public setNextChain(Chain next);
}