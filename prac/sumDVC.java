import java.util.Scanner;

public class sumDVC{
    public static void main(String[] args){
	Scanner sc = new Scanner(System.in);

	String[] s = sc.nextLine().split(" ");
	int [] list = new int[s.length];
	for(int i = 0; i < s.length; i++){
	    list[i] = Integer.parseInt(s[i]);
	}
	System.out.println(max(list, 0, list.length));
    }
    
    public static int maxCross(int [] list, int m, int l, int h){
	int sum = 0;
	int left = -10000000;
	for(int i = m; i >= l; i--){
	    sum = sum + list[i];
	    if(sum > left)
		left = sum;
	}
	sum = 0;
	int right = -10000000;
	for(int i = m+1; i < h; i++){
	    sum += list[i];
	    if(sum > right){
		right = sum;
	    }
	}
	return left + right;
    }

    public static int max(int[] list, int l, int h){
	if(h-1 == l)
	    return list[l];
	else{
	    int m = (h + l) /2;
	    return m(max(list,l,m), max(list,m,h), maxCross(list, m, l,h));
	}
    }
    
    public static int m(int a, int b, int c ){
	return Math.max(Math.max(a, b),c);
    }
}

