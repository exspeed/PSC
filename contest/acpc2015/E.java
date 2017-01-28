import java.util.Scanner;

public class E{

    static int[] P;
    public static void main(String[] arg){
	Scanner sc = new Scanner(System.in);
	int tc = sc.nextInt();
	for(int i = 0; i < tc; i++){
	    int k = sc.nextInt(); int n = sc.nextInt();
	    P = new int[k];
	    for(int j = 0; j < k;j++){
		P[j] = 2*sc.nextInt();
	    }
	    //binary search ... omg
	    long lb = -1, ub = (P[0] + P[k-1])/n;
	    long d = (lb + ub)/2;
	    // (a,b] i want lb to be the ans
	    while(lb +1 != ub){
		int res = checkD(d,n,P);
		if(res == -1){
		    ub = d;
		    d = (ub + lb) / 2; // + 1 ??
		}else if(res == 1){
		    lb = d; 
		    d = (lb + ub)/2;
		}
	    }
	    System.out.println((double)ub/2);
	}
    }

    
    // +1 increase d
    // -1 decrease d
    // (a, b]
    public static int checkD(long d, int k, int[] A){
	int marker = A[0] + d *2;
	k--;
	int i = 1;
	while(i < A.length){
	    if(A[i] <= marker){
	    }
	    else{
		marker = A[i] + 2*d;
		k--;
	    }
	    i++;
	}
	if(k >= 0) // d correct lower
	    return -1;
	else // d is incorrect
	    return 1;
    }
}
