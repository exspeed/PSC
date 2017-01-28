import java.util.Scanner;
import java.util.ArrayList;
import java.util.HashSet;

public class golfbot{

    public static void main(String [] args){
	Scanner sc = new Scanner(System.in);

	int n = sc.nextInt();
	ArrayList<Integer> a = new ArrayList<Integer>();
	for(int i = 0; i<n ; i++){
	    a.add(sc.nextInt());
	}

	int m = sc.nextInt();
	HashSet<Integer> b = new HashSet<Integer>();
	for(int i = 0; i < m; i++){
	    b.add(sc.nextInt());
	}

	int ans = 0;
	for(int i: a){
	    if(b.contains(i)){
		b.remove(i);
		ans++;
	    }
	}

    }
}
