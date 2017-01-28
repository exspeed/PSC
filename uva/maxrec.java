public class maxrec{
    public static void main(String[] arg){
	int [] L = {10,533,1,5465,2,4,8,2};
	System.out.println(maximum(arr, 0));
    }

   public static int maximum(int [] A, int index){
	if(index == A.length-1){
	    return A[index];
	}
	return Math.max(A[index], maximum(A, index+1));
    }

    public static int sum(int [] A, int index){
	if(index == A.length-1)	{
	    return A[index];
	}
	return  A[index] + sum[A,index+1];
    }

    public static void union(int x, int y)
    {
        L[find(x)] = find(y);
    }

    public static void find(int x)
    {
        return x == L[x] ? x :L[x] = find(L[x]);
    }

    public find1(int x){
        while( x != L[x])
            x = L[x];
        return x;
    }


}
