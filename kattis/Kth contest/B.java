import java.util.Scanner;

public class B{
    public static void main(String[] args){
	Scanner sc = new Scanner(System.in);
	int N = sc.nextInt();
	int M = sc.nextInt();

	pair [] rel = new pair[M*2];
	for (int i =0 ; i < M; i+=2){
	    int a = sc.nextInt();
	    int b = sc.nextInt();
	    rel[i] = new pair(a, b);
	    rel[i] = new pair(a, b);
	}

	bimatch();

	public static class pair{
	    int a;
	    int b;
	    pair(int a, int b){
		this.a = a;
		this.b = b;
	    }
	}
    
	public static int bimatch(pair [] rel){
	    
	}
	
    }
}
