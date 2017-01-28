import java.util.Scanner;

public class B{
    public static void main(String [] args){
	Scanner sc = new Scanner(System.in);

	int tc = sc.nextInt();
	for(int i = 0; i < tc; i++){
	    int x = sc.nextInt();
	    if(x % 2 == 0){
		System.out.println(x + " is even");
	    }else{
		System.out.println(x + " is odd");

	    }
	}
    }
}
