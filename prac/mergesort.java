import java.util.Scanner;

public class mergesort{
    public static void main(String[] args){
	Scanner sc = new Scanner(System.in);

	String [] arr = sc.nextLine().split(" ");
	int [] list = new int[arr.length];
	for(int i = 0; i < list.length; i++){
	    list[i] = Integer.parseInt(arr[i]);
	}

	for(int i: list){
	    System.out.print(i + " ");
	}
	System.out.println();

	
    }

    public static void merge(int [] list, int i, int j){
	if(i != j){
	    int m = (i + j)/2;
	    merge(list, i, m);
	    merge(list, m+1, j);	
	}
	
    }

    public static int split(int [] list, int i, int j){
	if(i == j){
	    return list[i];
	}

	if(a < b){
	    swap(list, i, j);
	}
    }

    
    public static void swap(int [] list, int i, int j){
	int sub = list[i];
	list[i] = list[j];
	list[j] = sub;
    }
}
