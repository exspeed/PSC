import java.util.Scanner;
import java.util.HashMap;
public class A{
    public static void main(String[] args){
	Scanner sc = new Scanner(System.in);
	int tc = sc.nextInt();

	String alpha = "abcdefghijklmnopqrstuvwxyz ";
	int [] num = {2,22,222,3,33,333,4,44,444,5,55,555,6,66,666,7,77,777,7777,8,88,888,9,99,999,9999, 0};

	sc.nextLine();
	for(int i = 1; i <= tc; i++){
	    String word = sc.nextLine();
	    System.out.print("Case #"+ i +": ");
	    int last = -1;
	    for(int j = 0; j < word.length(); j++){
		int index = alpha.indexOf(word.charAt(j));

		if(last == (num[index] %10) )
		    System.out.print(" ");
		if(word.charAt(j) == ' '){
		    System.out.print(0);
		    last = 0;
		    continue;
		}
		System.out.print(num[index]);
		last = num[index] %10;
	    }System.out.println();
	}
	    

	    
    }
}
