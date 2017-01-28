/*
  input: Given 2 sorted array X[1..n] and Y[1..n]
  output: median in log(n) + log(m)
  does not work
 */


import java.util.Scanner;

public class medianDVC{
    public static void main(String[] args){
	Scanner sc = new Scanner(System.in);
	String[] a = sc.nextLine().split(" "), b = sc.nextLine().split(" ");
	
	int [] l1 = new int[a.length], l2 = new int[b.length];

	for(int i = 0; i< l1.length; i++){
	    l1[i] = Integer.parseInt(a[i]);
	}
	for(int i = 0; i< l2.length; i++){
	    l2[i] = Integer.parseInt(b[i]);
	}
	int med = (l1.length + l2.length)/2;
	
	System.out.println(bs(l1,l2, med/2, med- med/2));
	
    }
    // assume i + j = med
    public static int bs(int [] l1, int [] l2, int i, int j){
	if (j >= l2.length){
	    return bs(l1, l2, i+j, 0);
	}
	else if(i >= l1.length){
	    return bs(l1, l2, i, j);
	}

	if(l1[i] > l2[j]){
	    if(l1[i] < l2[j+1])
		return l1[i];
	    else{
		int r = i/2; // decrease i
		j = j + (r-i);
		i = r;
	    }
	}else{
	    if( l2[j] < l1[i+1])
		return l2[j];
	    else{
		int r = j/2; // increase i
		i = i + (r-i);
		j = r;
	    }
	}
	return bs(l1, l2, i,j);
    }
}
