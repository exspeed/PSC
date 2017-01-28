import java.util.Scanner;

public class A{
    public static void main(String[] args){
	Scanner sc = new Scanner(System.in);
	int N = sc.nextInt();
	int val = 0;
	for (int i =1 ; i <= N; i <<= 1 ){
	    int bit = N & i;
	    if(bit > 0){
		bit = 1;
		val = bit | val;
	    }else{
		bit = 0;
		val = bit | val;
	    }
	    if((i<<1) < N){
		val <<=1;
	    }
	}
	System.out.println(val);

    }
}
