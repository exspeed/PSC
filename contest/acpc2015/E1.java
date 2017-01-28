import java.util.Scanner;

public class E1{

    public static int [] list;
    public static void main(String[] args){
	Scanner sc = new Scanner(System.in);
	int tc = sc.nextInt();
	while(tc > 0){
	    tc--;
	    int n = sc.nextInt(), k = sc.nextInt();
	    list = new int[n];
	    for (int i= 0; i < n; i++){
		list[i] = 2*sc.nextInt();
	    }

	    // bs
	    long lb = -1, ub = (list[n-1]+ list[0])/2;
	    long d = (lb + ub)/2;
	    while(lb+1 != ub){
		if(check(k, d) == 1){
		    lb = d;
		}else{
		    ub = d;
		}
		d = (lb + ub)/2;
	    }
	    System.out.printf("%.1f\n", (double)ub/2);
	}
    }

    // 1 = d is not possible go higher
    // -1 = d is possible, try lower
    public static int check(int k, long d){
	long c = list[0] + 2*d;
	k--;
	for(int i = 0; i < list.length; i++){
	    if(c >= list[i])
		continue;
	    else{
		if(k <= 0)
		    return 1;
		else{
		    k--;
		    c = list[i] +2*d;
		}
	    }
	}
	return -1;
    }
}
