import java.util.Scanner;
import java.util.Arrays;

public class sarray{
    public static void main(String []args){
	Scanner sc = new Scanner(System.in);
	int x = sc.nextInt();
	sc.nextLine();
	String [] hello = sc.nextLine().split(" ");
	int[] list = new int[200000];
	Arrays.fill(list,Integer.MAX_VALUE);

	for(int i = 0; i < hello.length; i++){
	    list[i] = Integer.parseInt(hello[i]);
	}


	//algorithm that's worth a lot.

	int bot = -1;
	int top = Integer.MAX_VALUE;
	int cur =0;
	int inc = 1;
	boolean chain = true;
	while(list[inc] != Integer.MAX_VALUE){
	    inc = inc *2;
	}
	top = inc;

	while(bot+1 != top){
	    cur = (bot + top) /2;
	    if(list[cur] > x){
		top = cur -1;
	    }else if (list[cur] < x){
		bot = cur;
	    }
	    else{
		System.out.println(cur);
		return;
	    }
	}

	
	System.out.println("Does not exisit");
    }
}
